module apb_delayer(
  input         clock,
  input         reset,
  input  [31:0] in_paddr,
  input         in_psel,
  input         in_penable,
  input  [2:0]  in_pprot,
  input         in_pwrite,
  input  [31:0] in_pwdata,
  input  [3:0]  in_pstrb,
  output        in_pready,
  output [31:0] in_prdata,
  output        in_pslverr,

  output [31:0] out_paddr,
  output        out_psel,
  output        out_penable,
  output [2:0]  out_pprot,
  output        out_pwrite,
  output [31:0] out_pwdata,
  output [3:0]  out_pstrb,
  input         out_pready,
  input  [31:0] out_prdata,
  input         out_pslverr
);  
  reg psel1;
  always @(posedge clock) begin
    if (reset) psel1 <= 1'b0;
    else psel1 <= in_psel;
  end
  wire is_sdram_read;
  assign is_sdram_read = (in_psel || psel1) && (!in_pwrite) && (in_paddr[31:28] == 4'ha);
  typedef enum [1:0] {ST_IDLE, ST_WAIT_READY, ST_WAIT_DELAY} state_t;
  reg [31:0] cnt1;
  reg [31:0] cnt2;
  reg [1:0] state;
  always @(posedge clock) begin
    if (reset) state <= ST_IDLE;
    else
      case (state)
        ST_IDLE: state <= is_sdram_read ? ST_WAIT_READY : ST_IDLE;
        ST_WAIT_READY: state <= out_pready ? ST_WAIT_DELAY : ST_WAIT_READY;
        ST_WAIT_DELAY: state <= (cnt2 == (cnt1 << 1)) ? ST_IDLE : ST_WAIT_DELAY;
        default: state <= state;
      endcase
  end
  assign out_paddr   = in_paddr;
  assign out_psel    = in_psel;
  assign out_penable = in_penable;
  assign out_pprot   = in_pprot;
  assign out_pwrite  = in_pwrite;
  assign out_pwdata  = in_pwdata;
  assign out_pstrb   = in_pstrb;

  always @(posedge clock) begin
    if (reset) begin
      cnt1 <= 32'b0;
      cnt2 <= 32'b0;
    end else begin
      if (state == ST_IDLE) begin
        cnt1 <= 32'b0;
        cnt2 <= 32'b0;
      end else if (state == ST_WAIT_READY) begin
        cnt1 <= cnt1 + 1;
        cnt2 <= cnt2;
      end else if (state == ST_WAIT_DELAY) begin
        cnt1 <= cnt1;
        cnt2 <= cnt2 + 1;
      end else begin
        cnt1 <= cnt1;
        cnt2 <= cnt2;
      end
    end
  end
  reg[31: 0] sdram_data0;
  always @(posedge clock) begin
    if (reset) begin
      sdram_data0  <= 32'b0;
    end 
    else begin
      if (out_pready) begin
        sdram_data0  <= out_prdata;
      end
    end
  end
  assign in_pready   = is_sdram_read ? ((state == ST_WAIT_DELAY && ((cnt2 == (cnt1 << 1) - 1) || (cnt2 == (cnt1 << 1)))) ? 1 : 0) : out_pready;
  assign in_prdata   = is_sdram_read ? ((state == ST_WAIT_DELAY && ((cnt2 == (cnt1 << 1) - 1) || (cnt2 == (cnt1 << 1)))) ? sdram_data0 : 0) : out_prdata;
  assign in_pslverr  = out_pslverr;
endmodule
