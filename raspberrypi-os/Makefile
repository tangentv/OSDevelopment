CC      = aarch64-elf-gcc
LD      = aarch64-elf-ld
OBJCOPY = aarch64-elf-objcopy

CFLAGS  = -Wall -O2 -ffreestanding -nostdlib

all: kernel8.img

boot.o: src/boot.S
	$(CC) $(CFLAGS) -c $< -o $@

kernel.o: src/kernel.c
	$(CC) $(CFLAGS) -c $< -o $@

kernel8.elf: boot.o kernel.o linker.ld
	$(LD) boot.o kernel.o -T linker.ld -o kernel8.elf

kernel8.img: kernel8.elf
	$(OBJCOPY) kernel8.elf -O binary kernel8.img

clean:
	rm -f *.o *.elf *.img