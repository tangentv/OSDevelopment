# OSDevelopment

For this project we need to learn the following - \

Phase 0 - Prepare MAC\
    brew install qemu\
    brew install cmake\
    brew install make\
    brew install git\
    brew install llvm\
    brew install gdb\

Install an ARM64 bare-metal compiler for Raspberry - Pi, preffered toolchain is - aarch64-none-elf-gcc\

Phase 1 - Build a booting kernel - (already implemented)\
Phase 2 - UART Driver\
Phase 3 - Exception Level\
Phase 4 - Exception Vectors\
Phase 5 - Timer Driver\
Phase 6 - Interrupt Controller\
Phase 7 - Memory Management - create a kernel heap\
Phase 8 - Physical memory manager -> track memory usage\
Phase 9 - Virtual memory - ARM MMU\
Phase 10 - Processes\
Phase 11 - Context Switching\
Phase 12 - Schedular - start with round robin\
Phase 13 - User Mode\
Phase 14 - Shell\
Phase 15 - SD Card driver\
Phase 16 - FAT 32 File system\
Phase 17 - ELF Loader - load executable\
Phase 18 - IPC - [Implement - Pipe, Message queue, Shared memory]\
Phase 19 - Drivers [Add GPIO, UART, SPI, I2C, CAN]\
Phase 20 - Networking [Implement Ethernet driver] , then ARP, IP, UDP, TCP\
Phase 21 - Multiprocessing -[Use all Raspberry Pi cores, add Spinlocks, Mutexes]\


Command to run the current code - 
"qemu-system-aarch64 \
    -M virt \
    -cpu cortex-a53 \
    -kernel kernel8.img \
    -nographic"

