cd src

nasm -f elf32 start0.asm -o start.o
gcc -m32 -c kernel.c -o kernel.o

ld -m elf_i386 -T linker.ld -o kernel start.o kernel.o
