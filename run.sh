cd src

read -p "Enter filesystem size, ex: 100M
: " hdd_size

qemu-img create kernel.img $hdd_size

read -p "Enter core count, ex: 6
: " cores
read -p "Enter memory size, ex: 100M
: " memory

qemu-system-i386 -smp $cores -m $memory -hda kernel.img -kernel kernel -boot order=dc
