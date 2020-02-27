#include "../drivers/screen.h"
#include "util.h"
#include "../cpu/isr.h"
#include "../cpu/idt.h"
#include "../drivers/keyboard.h"

void main()
{
    isr_install();

    asm volatile("sti");

    init_keyboard();
}