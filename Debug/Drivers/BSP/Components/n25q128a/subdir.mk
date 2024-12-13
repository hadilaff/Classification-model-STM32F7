################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (12.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Drivers/BSP/Components/n25q128a/ft5336.c \
../Drivers/BSP/Components/n25q128a/st7789h2.c 

OBJS += \
./Drivers/BSP/Components/n25q128a/ft5336.o \
./Drivers/BSP/Components/n25q128a/st7789h2.o 

C_DEPS += \
./Drivers/BSP/Components/n25q128a/ft5336.d \
./Drivers/BSP/Components/n25q128a/st7789h2.d 


# Each subdirectory must supply rules for building sources it contributes
Drivers/BSP/Components/n25q128a/%.o Drivers/BSP/Components/n25q128a/%.su Drivers/BSP/Components/n25q128a/%.cyclo: ../Drivers/BSP/Components/n25q128a/%.c Drivers/BSP/Components/n25q128a/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m7 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F746xx -c -I../X-CUBE-AI/App -I../X-CUBE-AI -I../X-CUBE-AI/Target -I../Core/Inc -I../Drivers/BSP/Components/n25q128a -I../Middlewares/ST/AI/Inc -I../Drivers/STM32F7xx_HAL_Driver/Inc -I../Drivers/BSP/STM32746G-Discovery -I../Drivers/STM32F7xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F7xx/Include -I../Drivers/CMSIS/Include -I"/home/hadil/STM32CubeIDE/workspace_1.16.0/dogcat_model_bak.h5-STM32F746G-DISCO-project/STM32F746G-DISCO1/Drivers/BSP/Components/Fonts" -Os -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv5-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-Drivers-2f-BSP-2f-Components-2f-n25q128a

clean-Drivers-2f-BSP-2f-Components-2f-n25q128a:
	-$(RM) ./Drivers/BSP/Components/n25q128a/ft5336.cyclo ./Drivers/BSP/Components/n25q128a/ft5336.d ./Drivers/BSP/Components/n25q128a/ft5336.o ./Drivers/BSP/Components/n25q128a/ft5336.su ./Drivers/BSP/Components/n25q128a/st7789h2.cyclo ./Drivers/BSP/Components/n25q128a/st7789h2.d ./Drivers/BSP/Components/n25q128a/st7789h2.o ./Drivers/BSP/Components/n25q128a/st7789h2.su

.PHONY: clean-Drivers-2f-BSP-2f-Components-2f-n25q128a

