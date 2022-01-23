cd src

echo ":: compiling asm files"
nasm -f elf32 start0.asm -o start.o
echo ":: compiling c files"
gcc -nostdlib -nostdinc -ffreestanding -W -m32 -std=c11 -Wall -Wextra -Wstrict-aliasing -c kernel.c graphics.c font.c counter.c

ld -m elf_i386 -T linker.ld -o kernel start.o graphics.o kernel.o font.o counter.o
