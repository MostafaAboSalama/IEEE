################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../2-HAL/03_SW/SW_program.c 

OBJS += \
./2-HAL/03_SW/SW_program.o 

C_DEPS += \
./2-HAL/03_SW/SW_program.d 


# Each subdirectory must supply rules for building sources it contributes
2-HAL/03_SW/%.o: ../2-HAL/03_SW/%.c 2-HAL/03_SW/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -Wall -g3 -gdwarf-2 -O0 -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega16 -DF_CPU=1000000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


