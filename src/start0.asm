bits 32 - 2 bit

section .text
        align 4
        dd 0x1BADB002
        dd 0x00
        dd - (0x1BADB002 + 0x00)

global start
extern main

global _halt

_halt:
  hlt

start:
  cli
  mov esp, stack_space
  call main
  hlt

RP:
  mov edx, [esp + 4]
  in al, dx
  ret

VP:
  mov edx, [esp + 4]
  mov al, [esp + 4 + 4]
  out dx, al
  ret

section .bss
resb 8192
stack_space:

