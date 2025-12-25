module axi4_delayer(
  input         clock,
  input         reset,

  output        in_arready,
  input         in_arvalid,
  input  [3:0]  in_arid,
  input  [31:0] in_araddr,
  input  [7:0]  in_arlen,
  input  [2:0]  in_arsize,
  input  [1:0]  in_arburst,
  input         in_rready,
  output        in_rvalid,
  output [3:0]  in_rid,
  output [31:0] in_rdata,
  output [1:0]  in_rresp,
  output        in_rlast,
  output        in_awready,
  input         in_awvalid,
  input  [3:0]  in_awid,
  input  [31:0] in_awaddr,
  input  [7:0]  in_awlen,
  input  [2:0]  in_awsize,
  input  [1:0]  in_awburst,
  output        in_wready,
  input         in_wvalid,
  input  [31:0] in_wdata,
  input  [3:0]  in_wstrb,
  input         in_wlast,
                in_bready,
  output        in_bvalid,
  output [3:0]  in_bid,
  output [1:0]  in_bresp,

  input         out_arready,
  output        out_arvalid,
  output [3:0]  out_arid,
  output [31:0] out_araddr,
  output [7:0]  out_arlen,
  output [2:0]  out_arsize,
  output [1:0]  out_arburst,
  output        out_rready,
  input         out_rvalid,
  input  [3:0]  out_rid,
  input  [31:0] out_rdata,
  input  [1:0]  out_rresp,
  input         out_rlast,
  input         out_awready,
  output        out_awvalid,
  output [3:0]  out_awid,
  output [31:0] out_awaddr,
  output [7:0]  out_awlen,
  output [2:0]  out_awsize,
  output [1:0]  out_awburst,
  input         out_wready,
  output        out_wvalid,
  output [31:0] out_wdata,
  output [3:0]  out_wstrb,
  output        out_wlast,
                out_bready,
  input         out_bvalid,
  input  [3:0]  out_bid,
  input  [1:0]  out_bresp
);
  typedef enum [1:0] {ar_ready_idle, ar_ready_wait, ar_ready_delay} state_ar_ready_t;
  reg [1:0]   ar_ready_state;
  reg [7:0]   cnt_ready1;
  reg [7:0]   cnt_ready2;
  
  reg in_arready_reg;

  always @(posedge clock) begin
    if (reset) begin
      ar_ready_state <= ar_ready_idle;
    end 
    else begin
      case (ar_ready_state)
        ar_ready_idle: ar_ready_state <= (in_arvalid && cnt_ready1 == 8'd0) ? ar_ready_wait: 
                                                        ar_ready_state;
        ar_ready_wait: ar_ready_state <= (out_arready)? ar_ready_delay:
                                                        ar_ready_state;
        ar_ready_delay:ar_ready_state <= (cnt_ready2 == cnt_ready1)? ar_ready_idle:
                                                                     ar_ready_state;
        default:       ar_ready_state <= ar_ready_idle;
      endcase
    end
  end

  always @(posedge clock) begin
    if (reset) begin
      cnt_ready1 <= 8'd0;
    end 
    else begin
      if (ar_ready_state == ar_ready_wait) begin
        cnt_ready1 <= cnt_ready1 + 8'd2;
      end
      else if (ar_ready_state == ar_ready_idle) begin
        cnt_ready1 <= 8'd0;
      end
    end
  end

  always @(posedge clock) begin
    if (reset) begin
      cnt_ready2 <= 8'd0;
    end 
    else begin
      if (ar_ready_state == ar_ready_delay) begin
        cnt_ready2 <= cnt_ready2 + 8'd1;
      end
      else if (ar_ready_state == ar_ready_idle) begin
        cnt_ready2 <= 8'd0;
      end
    end
  end

  always @(posedge clock) begin
    if (reset) begin
      in_arready_reg <= 1'b0;
    end 
    else begin
      if (ar_ready_state == ar_ready_delay && cnt_ready2 == cnt_ready1) begin
        in_arready_reg <= 1'b1;
      end
      else begin
        in_arready_reg <= 1'b0;
      end
    end
  end
  assign in_arready = in_arready_reg;
  
  reg [7:0]   r_delay1;
  reg [7:0]   r_delay2;
  reg [7:0]   r_delay3;
  reg [7:0]   r_delay4;
  reg [7:0]   delay_cnt;
  reg [7:0]   r_delay_cnt;
  reg [2:0]   data_cnt; 
  reg [31:0]  r_data1;
  reg [31:0]  r_data2;
  reg [31:0]  r_data3;
  reg [31:0]  r_data4;
  reg r_valid1;
  reg r_valid2;
  reg r_valid3;
  reg r_valid4;
  reg state_jishu;
  reg state_out;

  reg [31:0]  data_out1;
  reg [31:0]  data_out2;
  reg [31:0]  data_out3;
  reg [31:0]  data_out4;
  reg valid_out1;
  reg valid_out2;
  reg valid_out3;
  reg valid_out4;
  reg last_out;

  always @(posedge clock) begin
    if (reset) begin
      state_jishu <= 1'b0;
    end
    else begin
      if(state_jishu == 1'b0) begin
        if(in_arvalid && out_arready && r_valid1 == 1'b0) begin
          state_jishu <= 1'b1;
        end
      end
      else begin
        if(out_rvalid && out_rlast) begin
          state_jishu <= 1'b0;
        end
      end
    end
  end

  always @(posedge clock) begin
    if (reset) begin
      state_out <= 1'b0;
    end
    else begin
      if(state_out == 1'b0) begin
        if(in_arready_reg) begin
          state_out <= 1'b1;
        end
      end
      else begin
        if(in_arlen == 8'd0) begin
          if(r_delay_cnt == r_delay1 && r_valid1 == 1'b1)
            state_out <= 1'b0;
          else
            state_out <= state_out;
        end
        else begin
          if(r_delay_cnt == r_delay4 && r_valid4 == 1'b1)
            state_out <= 1'b0;
          else
            state_out <= state_out;
        end
      end
    end
  end

  always @(posedge clock) begin
    if (reset) begin
      delay_cnt <= 8'd0;
    end
    else begin
      if(state_jishu == 1'b1) begin
        delay_cnt <= delay_cnt + 8'd2;
      end
      else begin
        delay_cnt <= 8'd0;
      end
    end
  end

  always @(posedge clock) begin
    if (reset) begin
      r_delay1 <= 8'd0;
      r_delay2 <= 8'd0;
      r_delay3 <= 8'd0;
      r_delay4 <= 8'd0;
      r_valid1 <= 1'b0;
      r_valid2 <= 1'b0;
      r_valid3 <= 1'b0;
      r_valid4 <= 1'b0;
      r_data1 <= 32'd0;
      r_data2 <= 32'd0;
      r_data3 <= 32'd0;
      r_data4 <= 32'd0;
    end
    else begin
      if(state_jishu == 1'b1) begin
        if(out_rvalid && in_rready) begin
          if(data_cnt == 3'd0) begin
            r_data1 <= out_rdata;
            r_valid1 <= 1'b1;
            r_delay1 <= delay_cnt;
            data_cnt <= (in_arlen == 8'd0) ? 3'd0 : data_cnt + 3'd1;
          end
          else if(data_cnt == 3'd1) begin
            r_data2 <= out_rdata;
            r_valid2 <= 1'b1;
            r_delay2 <= delay_cnt;
            data_cnt <= data_cnt + 3'd1;
          end
          else if(data_cnt == 3'd2) begin
            r_data3 <= out_rdata;
            r_valid3 <= 1'b1;
            r_delay3 <= delay_cnt;
            data_cnt <= data_cnt + 3'd1;
          end
          else if(data_cnt == 3'd3) begin
            r_data4 <= out_rdata;
            r_valid4 <= 1'b1;
            r_delay4 <= delay_cnt;
            data_cnt <= 3'd0;
          end
        end
      end
      else if(state_out == 1'b1) begin
        if(in_arlen == 8'd0) begin
          if(r_delay_cnt == r_delay1) begin
            r_data1 <= 32'd0;
            r_delay1 <= 8'd0;
            r_valid1 <= 1'b0;
          end
          else begin
            r_data1 <= r_data1;
            r_delay1 <= r_delay1;
            r_valid1 <= r_valid1;
          end
        end
        else begin
          if(r_delay_cnt == r_delay4) begin
            r_data1 <= 32'd0;
            r_delay1 <= 8'd0;
            r_valid1 <= 1'b0;
            r_valid2 <= 1'b0;
            r_valid3 <= 1'b0;
            r_valid4 <= 1'b0;
            r_data2 <= 32'd0;
            r_data3 <= 32'd0;
            r_data4 <= 32'd0;
            r_delay2 <= 8'd0;
            r_delay3 <= 8'd0;
            r_delay4 <= 8'd0;
          end
          else begin
            r_data1 <= r_data1;
            r_delay1 <= r_delay1;
            r_valid1 <= r_valid1;
            r_valid2 <= r_valid2;
            r_valid3 <= r_valid3;
            r_valid4 <= r_valid4;
            r_data2 <= r_data2;
            r_data3 <= r_data3;
            r_data4 <= r_data4;
            r_delay2 <= r_delay2;
            r_delay3 <= r_delay3;
            r_delay4 <= r_delay4;
          end
        end
      end
    end
  end

  always @(posedge clock) begin
    if (reset) begin
      r_delay_cnt <= 8'd0;
    end
    else begin
      if(state_out == 1'b1) begin
        r_delay_cnt <= r_delay_cnt + 8'd1;
      end
      else begin
        r_delay_cnt <= 8'd0;
      end
    end
  end

  always @(posedge clock) begin
    if (reset) begin
      data_out1 <= 32'd0;
      data_out2 <= 32'd0;
      data_out3 <= 32'd0;
      data_out4 <= 32'd0;
      valid_out1 <= 1'b0;
      valid_out2 <= 1'b0;
      valid_out3 <= 1'b0;
      valid_out4 <= 1'b0;
      last_out <= 1'b0;
    end
    else begin
      if(in_arlen == 8'd0) begin
        if(r_delay_cnt == r_delay1 && state_out) begin
          data_out1 <= r_data1;
          valid_out1 <= r_valid1;
          last_out <= 1'b1;
        end
        else begin
          data_out1 <= 32'd0;
          valid_out1 <= 1'b0;
          last_out <= 1'b0;
        end
      end
      else begin
        if(r_delay_cnt == r_delay1 && state_out) begin
          data_out1 <= r_data1;
          valid_out1 <= r_valid1;
        end
        else begin
          data_out1 <= 32'd0;
          valid_out1 <= 1'b0;
        end
        if(r_delay_cnt == r_delay2 && state_out) begin
          data_out2 <= r_data2;
          valid_out2 <= r_valid2;
        end
        else begin
          data_out2 <= 32'd0;
          valid_out2 <= 1'b0;
        end
        if(r_delay_cnt == r_delay3 && state_out) begin
          data_out3 <= r_data3;
          valid_out3 <= r_valid3;
        end
        else begin
          data_out3 <= 32'd0;
          valid_out3 <= 1'b0;
        end
        if(r_delay_cnt == r_delay4 && state_out) begin
          data_out4 <= r_data4;
          valid_out4 <= r_valid4;
          last_out <= 1'b1;
        end
        else begin
          data_out4 <= 32'd0;
          valid_out4 <= 1'b0;
          last_out <= 1'b0;
        end
      end
    end
  end

  assign out_arvalid = (ar_ready_state == ar_ready_wait) || (in_arvalid && (ar_ready_state == ar_ready_idle) && (in_arready == 1'b0));
  assign out_arid = in_arid;
  assign out_araddr = in_araddr;
  assign out_arlen = in_arlen;
  assign out_arsize = in_arsize;
  assign out_arburst = in_arburst;
  assign out_rready = in_rready;
  assign in_rvalid = valid_out1 | valid_out2 | valid_out3 | valid_out4;
  assign in_rid = out_rid;
  assign in_rdata = valid_out1 ? data_out1 :
                    valid_out2 ? data_out2 :
                    valid_out3 ? data_out3 :
                    valid_out4 ? data_out4 : 32'd0;
  assign in_rresp = out_rresp;
  assign in_rlast = last_out;
  assign in_awready = out_awready;
  assign out_awvalid = in_awvalid;
  assign out_awid = in_awid;
  assign out_awaddr = in_awaddr;
  assign out_awlen = in_awlen;
  assign out_awsize = in_awsize;
  assign out_awburst = in_awburst;
  assign in_wready = out_wready;
  assign out_wvalid = in_wvalid;
  assign out_wdata = in_wdata;
  assign out_wstrb = in_wstrb;
  assign out_wlast = in_wlast;
  assign out_bready = in_bready;
  assign in_bvalid = out_bvalid;
  assign in_bid = out_bid;
  assign in_bresp = out_bresp;

endmodule
