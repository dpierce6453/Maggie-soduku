################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/AllTests.cpp \
../src/SodukuTests.cpp \
../src/UsefulFunctions.cpp 

OBJS += \
./src/AllTests.o \
./src/SodukuTests.o \
./src/UsefulFunctions.o 

CPP_DEPS += \
./src/AllTests.d \
./src/SodukuTests.d \
./src/UsefulFunctions.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


