ENTRY(_start)
PHDRS {
  fsbl PT_LOAD;
  ssbl PT_LOAD;
  text PT_LOAD;
  data PT_LOAD;
  bss  PT_LOAD;
}

MEMORY 
{
  flash : ORIGIN = 0x30000000, LENGTH = 256M
  sram  : ORIGIN = 0x0f000000, LENGTH = 8K
  psram : ORIGIN = 0x80000000, LENGTH = 4M
  sdram : ORIGIN = 0xa0000000, LENGTH = 40M
}

SECTIONS {
  . = ORIGIN(flash);
  .text.fsbl : {
    *(entry)
    _fsbl_load = .;
    *(.text.fsbl)
    _efsbl_load = .;
  } > flash AT >flash : fsbl
  
  . = ORIGIN(sdram);
  .text.ssbl : {
    _ssbl_load = .;
    *(.text.ssbl)
    _essbl_load = .;
  } > sdram AT >flash : ssbl

  .text :
  ALIGN_WITH_INPUT 
  SUBALIGN(4)
  {
    _text = .;
    *(.text*)
    _etext = .;
  } > sdram AT >flash : text

  .rodata :
  ALIGN_WITH_INPUT 
  SUBALIGN(4){
    _rodata = .;
    *(.rodata*)
    *(.srodata*)
    _erodata = .;
  } > sdram AT >flash : text

  .data :
  ALIGN_WITH_INPUT 
  SUBALIGN(4){
    _data = .;
    *(.data*)
    *(.sdata*)
    _edata = .;
  } > sdram AT >flash : data

  .bss :
  ALIGN_WITH_INPUT 
  SUBALIGN(4){
    _bss_start = .;
    *(.bss*)
    *(.sbss*)
    *(.scommon)
    _bss_end = .;
  } > sdram AT >flash : bss

  end = .;
  _end = .;
  _heap_start = ALIGN(0x10);
  _heap_end = _heap_start + 0x400000;

  _sdram_start = .;
  _sdram_end   = _sdram_start + 0x1000;

  _stack_top = _sram_start;
  . = _stack_top + _sram_size - 0x500;
  _stack_pointer = .;
  _psram_start = 0x80000000;
  _gpio_start  = 0x10002000;
  _gpio_end    = 0x1000200f;
  _fence_start = 0x0f001700;

  _vga_start  = 0x21000000;
}
