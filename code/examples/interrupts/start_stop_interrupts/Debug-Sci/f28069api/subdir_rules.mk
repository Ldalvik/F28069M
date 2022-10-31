################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Each subdirectory must supply rules for building sources it contributes
f28069api/%.obj: ../f28069api/%.c $(GEN_OPTS) | $(GEN_FILES) $(GEN_MISC_FILES)
	@echo 'Building file: "$<"'
	@echo 'Invoking: C2000 Compiler'
	"/Users/julian/ti/ti-cgt-c2000_18.12.8.LTS/bin/cl2000" -v28 -ml -mt --float_support=fpu32 --tmu_support=tmu0 --fp_mode=relaxed --include_path="/Users/julian/Desktop/test_28069" --include_path="/Users/julian/Desktop/test_28069/tiinc" --include_path="/Users/julian/ti/ti-cgt-c2000_18.12.8.LTS/include" --define=_PLEXIM_ --define=CPU1 --define=EXTERNAL_MODE=1 --define=_FLASH -g --gcc --diag_warning=225 --display_error_number --abi=coffabi --preproc_with_compile --preproc_dependency="f28069api/$(basename $(<F)).d_raw" --obj_directory="f28069api" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: "$<"'
	@echo ' '


