; Global Interrupt Handler

%macro NECIH 1

global IH%1

IH%1:

  push dword 0
  push dword %1
  jmp common_interrupt_handler

%endmacro

%macro ECIH 1

global IH%1

IH%1:

  push dword%1
  jmp common_interrupt_handler

%endmacro

common_interrupt_handler:

  push eax
  push ebx

  push ebp

  call interrupt_handler ;from ih.h file

  pop ebp
  pop ebx
  pop eax

  add esp, 8

  iret
  
  pop NO_ERROR_IH, 0
  pop NO_ERROR_IH, 1

  pop ERROR_CODE_HANDLER, 7

global LOAD_IDT

LOAD_IDT:

  mov eax, [esp+4]
  lidt eax
  ret
