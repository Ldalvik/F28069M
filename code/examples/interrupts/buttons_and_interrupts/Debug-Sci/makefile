################################################################################
# Automatically-generated file. Do not edit!
################################################################################

CG_TOOL_ROOT := /Users/julian/ti/ti-cgt-c2000_18.12.8.LTS

GEN_OPTS__FLAG := 
GEN_CMDS__FLAG := 

ORDERED_OBJS += \
"./main.obj" \
"./sci_2806x.obj" \
"./f28069api/api.obj" \
"./f28069api/initializers.obj" \
"./f28069api/interrupts.obj" \
"./tisrc/F2806x_CodeStartBranch.obj" \
"./tisrc/F2806x_DevInit.obj" \
"./tisrc/F2806x_GlobalVariableDefs.obj" \
"./tisrc/F2806x_usDelay.obj" \
"../F28069.cmd" \
"../F2806x_Headers_nonBIOS.cmd" \
$(GEN_CMDS__FLAG) \
-llibc.a \

-include ../makefile.init

RM := rm -rf
RMDIR := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include subdir_vars.mk
-include f28069api/subdir_vars.mk
-include tisrc/subdir_vars.mk
-include subdir_rules.mk
-include f28069api/subdir_rules.mk
-include tisrc/subdir_rules.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(C55_DEPS)),)
-include $(C55_DEPS)
endif
ifneq ($(strip $(C_UPPER_DEPS)),)
-include $(C_UPPER_DEPS)
endif
ifneq ($(strip $(S67_DEPS)),)
-include $(S67_DEPS)
endif
ifneq ($(strip $(S62_DEPS)),)
-include $(S62_DEPS)
endif
ifneq ($(strip $(S_DEPS)),)
-include $(S_DEPS)
endif
ifneq ($(strip $(OPT_DEPS)),)
-include $(OPT_DEPS)
endif
ifneq ($(strip $(C??_DEPS)),)
-include $(C??_DEPS)
endif
ifneq ($(strip $(ASM_UPPER_DEPS)),)
-include $(ASM_UPPER_DEPS)
endif
ifneq ($(strip $(S??_DEPS)),)
-include $(S??_DEPS)
endif
ifneq ($(strip $(C64_DEPS)),)
-include $(C64_DEPS)
endif
ifneq ($(strip $(CXX_DEPS)),)
-include $(CXX_DEPS)
endif
ifneq ($(strip $(S64_DEPS)),)
-include $(S64_DEPS)
endif
ifneq ($(strip $(INO_DEPS)),)
-include $(INO_DEPS)
endif
ifneq ($(strip $(CLA_DEPS)),)
-include $(CLA_DEPS)
endif
ifneq ($(strip $(S55_DEPS)),)
-include $(S55_DEPS)
endif
ifneq ($(strip $(SV7A_DEPS)),)
-include $(SV7A_DEPS)
endif
ifneq ($(strip $(C62_DEPS)),)
-include $(C62_DEPS)
endif
ifneq ($(strip $(C67_DEPS)),)
-include $(C67_DEPS)
endif
ifneq ($(strip $(PDE_DEPS)),)
-include $(PDE_DEPS)
endif
ifneq ($(strip $(K_DEPS)),)
-include $(K_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
ifneq ($(strip $(CC_DEPS)),)
-include $(CC_DEPS)
endif
ifneq ($(strip $(C++_DEPS)),)
-include $(C++_DEPS)
endif
ifneq ($(strip $(C43_DEPS)),)
-include $(C43_DEPS)
endif
ifneq ($(strip $(S43_DEPS)),)
-include $(S43_DEPS)
endif
ifneq ($(strip $(ASM_DEPS)),)
-include $(ASM_DEPS)
endif
ifneq ($(strip $(S_UPPER_DEPS)),)
-include $(S_UPPER_DEPS)
endif
ifneq ($(strip $(CPP_DEPS)),)
-include $(CPP_DEPS)
endif
ifneq ($(strip $(SA_DEPS)),)
-include $(SA_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 
EXE_OUTPUTS += \
test_28069.out \

EXE_OUTPUTS__QUOTED += \
"test_28069.out" \

BIN_OUTPUTS += \
test_28069.hex \

BIN_OUTPUTS__QUOTED += \
"test_28069.hex" \


# All Target
all: test_28069.out

# Tool invocations
test_28069.out: $(OBJS) $(CMD_SRCS) $(GEN_CMDS)
	@echo 'Building target: "$@"'
	@echo 'Invoking: C2000 Linker'
	"/Users/julian/ti/ti-cgt-c2000_18.12.8.LTS/bin/cl2000" -v28 -ml -mt --float_support=fpu32 --tmu_support=tmu0 --fp_mode=relaxed --define=_PLEXIM_ --define=CPU1 --define=EXTERNAL_MODE=1 --define=_FLASH -g --gcc --diag_warning=225 --display_error_number --abi=coffabi -z -m"test_28069.map" --stack_size=0x300 --warn_sections -i"/Users/julian/ti/ti-cgt-c2000_18.12.8.LTS/lib" -i"/Users/julian/ti/ti-cgt-c2000_18.12.8.LTS/include" --reread_libs --display_error_number --xml_link_info="test_28069_linkInfo.xml" --rom_model -o "test_28069.out" $(ORDERED_OBJS)
	@echo 'Finished building target: "$@"'
	@echo ' '

test_28069.hex: $(EXE_OUTPUTS)
	@echo 'Building secondary target: "$@"'
	@echo 'Invoking: C2000 Hex Utility'
	"/Users/julian/ti/ti-cgt-c2000_18.12.8.LTS/bin/hex2000" --diag_wrap=off -o "test_28069.hex" $(EXE_OUTPUTS__QUOTED)
	@echo 'Finished building secondary target: "$@"'
	@echo ' '

# Other Targets
clean:
	-$(RM) $(BIN_OUTPUTS__QUOTED)$(EXE_OUTPUTS__QUOTED)
	-$(RM) "main.obj" "sci_2806x.obj" "f28069api/api.obj" "f28069api/initializers.obj" "f28069api/interrupts.obj" "tisrc/F2806x_CodeStartBranch.obj" "tisrc/F2806x_DevInit.obj" "tisrc/F2806x_GlobalVariableDefs.obj" "tisrc/F2806x_usDelay.obj" 
	-$(RM) "main.d" "sci_2806x.d" "f28069api/api.d" "f28069api/initializers.d" "f28069api/interrupts.d" "tisrc/F2806x_DevInit.d" "tisrc/F2806x_GlobalVariableDefs.d" 
	-$(RM) "tisrc/F2806x_CodeStartBranch.d" "tisrc/F2806x_usDelay.d" 
	-@echo 'Finished clean'
	-@echo ' '

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets

