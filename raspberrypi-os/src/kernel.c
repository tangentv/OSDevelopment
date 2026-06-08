#define UART0_DR     ((volatile unsigned int*)(0x09000000))

void uart_putc(char c)
{
    *UART0_DR = c;
}

void uart_puts(const char* str)
{
    while (*str)
    {
        uart_putc(*str++);
    }
}

void kernel_main(void)
{
    uart_puts("Hello, World!\r\n");

    while (1)
    {
        asm volatile("wfe");
    }
}