OUTPUT_FORMAT(elf32-i386)
ENTRY(start)
SECTIONS {
  . = 0x100000;
  
  .text : { 
    *(.text) 
  }
  
  .data BLOCK(4K) : ALIGN(4K) { 
    *(.data) 
  }
  
  .bss : { 
    *(.bss) 
  }
}
