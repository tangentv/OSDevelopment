ENTRY(_start)

SECTIONS
{
    . = 0x40080000;

    .text :
    {
        *(.text.boot)
        *(.text*)
    }

    .rodata :
    {
        *(.rodata*)
    }

    .data :
    {
        *(.data*)
    }

    .bss :
    {
        *(.bss*)
    }

    . = ALIGN(16);
    _stack_top = . + 0x10000;
}