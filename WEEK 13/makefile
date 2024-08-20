CC = arm-none-eabi-gcc

CFLAGS = -c -mcpu=$(ACH) -std=gnu11 -mthumb -nostdlib -nolibc -g -I . -gdwarf-2

ACH = cortex-m4

makeFile: clean main.o debug analysis

clean:
	@rm -f *.o

main.o: main.c
	@$(CC) $(CFLAGS) main.c -o main.o

main.elf: main.c
	@$(CC) $(CFLAGS) main.c -o main.elf

debug: main.elf
	@arm-none-eabi-gdb main.elf

analysis: main.c
	@cppcheck --enable=all main.c
