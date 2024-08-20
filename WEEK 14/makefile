CC = arm-none-eabi-gcc
CFLAGS = -c -mcpu=$(ACH) -std=gnu11 -mthumb
LDFLAGS = -T linkerScript.ld -nostdlib -Wl,-Map=AboSalama.map
ACH = cortex-m4

main.o: main.c
	$(CC) $(CFLAGS) $^ -o $@

GPIO_Prog.o: GPIO_Prog.c
	$(CC) $(CFLAGS) $^ -o $@

SysTick_Prog.o: SysTick_Prog.c
	$(CC) $(CFLAGS) $^ -o $@

RCC_Prog.o: RCC_Prog.c
	$(CC) $(CFLAGS) $^ -o $@

Startup.o: Startup.c
	$(CC) $(CFLAGS) $^ -o $@

AboSalama.elf: main.o GPIO_Prog.o SysTick_Prog.o RCC_Prog.o Startup.o 
	$(CC) $(LDFLAGS) $^ -o $@


all: main.o GPIO_Prog.o RCC_Prog.o SysTick_Prog.o Startup.o AboSalama.elf

clean:
	rm -rf *.o
