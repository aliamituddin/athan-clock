################################################################################
# Automatically-generated file. Do not edit!
################################################################################

SHELL = cmd.exe

# Each subdirectory must supply rules for building sources it contributes
images/Images_Button.obj: ../images/Images_Button.c $(GEN_OPTS) | $(GEN_FILES)
	@echo 'Building file: "$<"'
	@echo 'Invoking: ARM Compiler'
	"C:/TI/ccsv8/tools/compiler/ti-cgt-arm_18.1.5.LTS/bin/armcl" --cmd_file="C:/workspace_v8/ble5_project_zero_cc26x2r1lp_app/TOOLS/defines/ble5_project_zero_cc26x2r1lp_app_FlashROM_Debug.opt" --cmd_file="C:/TI/simplelink_cc26x2_sdk_2_20_00_36/source/ti/ble5stack/config/build_components.opt" --cmd_file="C:/TI/simplelink_cc26x2_sdk_2_20_00_36/source/ti/ble5stack/config/factory_config.opt" --cmd_file="C:/workspace_v8/ble5_project_zero_cc26x2r1lp_stack_library/TOOLS/build_config.opt"  -mv7M4 --code_state=16 -me -O2 --opt_for_speed=0 --include_path="C:/workspace_v8/ble5_project_zero_cc26x2r1lp_app" --include_path="C:/workspace_v8/ble5_project_zero_cc26x2r1lp_app/Application" --include_path="C:/workspace_v8/ble5_project_zero_cc26x2r1lp_app/LcdDriver" --include_path="C:/workspace_v8/ble5_project_zero_cc26x2r1lp_app/GrLib/grlib" --include_path="C:/workspace_v8/ble5_project_zero_cc26x2r1lp_app/Startup" --include_path="C:/workspace_v8/ble5_project_zero_cc26x2r1lp_app/PROFILES" --include_path="C:/workspace_v8/ble5_project_zero_cc26x2r1lp_app/Include" --include_path="C:/TI/simplelink_cc26x2_sdk_2_20_00_36/source/ti/ble5stack/controller/cc26xx/inc" --include_path="C:/TI/simplelink_cc26x2_sdk_2_20_00_36/source/ti/ble5stack/inc" --include_path="C:/TI/simplelink_cc26x2_sdk_2_20_00_36/source/ti/ble5stack/rom" --include_path="C:/TI/simplelink_cc26x2_sdk_2_20_00_36/source/ti/ble5stack/common/cc26xx" --include_path="C:/TI/simplelink_cc26x2_sdk_2_20_00_36/source/ti/" --include_path="C:/TI/simplelink_cc26x2_sdk_2_20_00_36/source/ti/ble5stack/icall/inc" --include_path="C:/TI/simplelink_cc26x2_sdk_2_20_00_36/source/ti/ble5stack/target" --include_path="C:/TI/simplelink_cc26x2_sdk_2_20_00_36/source/ti/common/" --include_path="C:/TI/simplelink_cc26x2_sdk_2_20_00_36/source/ti/ble5stack/hal/src/target/_common" --include_path="C:/TI/simplelink_cc26x2_sdk_2_20_00_36/source/ti/ble5stack/hal/src/target/_common/cc26xx" --include_path="C:/TI/simplelink_cc26x2_sdk_2_20_00_36/source/ti/ble5stack/profiles/oad/cc26xx" --include_path="C:/TI/simplelink_cc26x2_sdk_2_20_00_36/source/ti/ble5stack/hal/src/inc" --include_path="C:/TI/simplelink_cc26x2_sdk_2_20_00_36/source/ti/ble5stack/heapmgr" --include_path="C:/TI/simplelink_cc26x2_sdk_2_20_00_36/source/ti/ble5stack/icall/src/inc" --include_path="C:/TI/simplelink_cc26x2_sdk_2_20_00_36/source/ti/ble5stack/osal/src/inc" --include_path="C:/TI/simplelink_cc26x2_sdk_2_20_00_36/source/ti/ble5stack/services/src/saddr" --include_path="C:/TI/simplelink_cc26x2_sdk_2_20_00_36/source/ti/ble5stack/services/src/sdata" --include_path="C:/TI/simplelink_cc26x2_sdk_2_20_00_36/source/ti/ble5stack/services/src/nv" --include_path="C:/TI/simplelink_cc26x2_sdk_2_20_00_36/source/ti/ble5stack/services/src/nv/cc26xx" --include_path="C:/TI/simplelink_cc26x2_sdk_2_20_00_36/source/ti/devices/cc13x2_cc26x2_v1" --include_path="C:/TI/ccsv8/tools/compiler/ti-cgt-arm_18.1.5.LTS/include" --define=DeviceFamily_CC26X2 --define=uartlog_FILE="\"Images_Button.c\"" -g --c99 --gcc --diag_warning=225 --diag_wrap=off --display_error_number --gen_func_subsections=on --abi=eabi --preproc_with_compile --preproc_dependency="images/Images_Button.d_raw" --obj_directory="images" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: "$<"'
	@echo ' '

images/Primitives_Button.obj: ../images/Primitives_Button.c $(GEN_OPTS) | $(GEN_FILES)
	@echo 'Building file: "$<"'
	@echo 'Invoking: ARM Compiler'
	"C:/TI/ccsv8/tools/compiler/ti-cgt-arm_18.1.5.LTS/bin/armcl" --cmd_file="C:/workspace_v8/ble5_project_zero_cc26x2r1lp_app/TOOLS/defines/ble5_project_zero_cc26x2r1lp_app_FlashROM_Debug.opt" --cmd_file="C:/TI/simplelink_cc26x2_sdk_2_20_00_36/source/ti/ble5stack/config/build_components.opt" --cmd_file="C:/TI/simplelink_cc26x2_sdk_2_20_00_36/source/ti/ble5stack/config/factory_config.opt" --cmd_file="C:/workspace_v8/ble5_project_zero_cc26x2r1lp_stack_library/TOOLS/build_config.opt"  -mv7M4 --code_state=16 -me -O2 --opt_for_speed=0 --include_path="C:/workspace_v8/ble5_project_zero_cc26x2r1lp_app" --include_path="C:/workspace_v8/ble5_project_zero_cc26x2r1lp_app/Application" --include_path="C:/workspace_v8/ble5_project_zero_cc26x2r1lp_app/LcdDriver" --include_path="C:/workspace_v8/ble5_project_zero_cc26x2r1lp_app/GrLib/grlib" --include_path="C:/workspace_v8/ble5_project_zero_cc26x2r1lp_app/Startup" --include_path="C:/workspace_v8/ble5_project_zero_cc26x2r1lp_app/PROFILES" --include_path="C:/workspace_v8/ble5_project_zero_cc26x2r1lp_app/Include" --include_path="C:/TI/simplelink_cc26x2_sdk_2_20_00_36/source/ti/ble5stack/controller/cc26xx/inc" --include_path="C:/TI/simplelink_cc26x2_sdk_2_20_00_36/source/ti/ble5stack/inc" --include_path="C:/TI/simplelink_cc26x2_sdk_2_20_00_36/source/ti/ble5stack/rom" --include_path="C:/TI/simplelink_cc26x2_sdk_2_20_00_36/source/ti/ble5stack/common/cc26xx" --include_path="C:/TI/simplelink_cc26x2_sdk_2_20_00_36/source/ti/" --include_path="C:/TI/simplelink_cc26x2_sdk_2_20_00_36/source/ti/ble5stack/icall/inc" --include_path="C:/TI/simplelink_cc26x2_sdk_2_20_00_36/source/ti/ble5stack/target" --include_path="C:/TI/simplelink_cc26x2_sdk_2_20_00_36/source/ti/common/" --include_path="C:/TI/simplelink_cc26x2_sdk_2_20_00_36/source/ti/ble5stack/hal/src/target/_common" --include_path="C:/TI/simplelink_cc26x2_sdk_2_20_00_36/source/ti/ble5stack/hal/src/target/_common/cc26xx" --include_path="C:/TI/simplelink_cc26x2_sdk_2_20_00_36/source/ti/ble5stack/profiles/oad/cc26xx" --include_path="C:/TI/simplelink_cc26x2_sdk_2_20_00_36/source/ti/ble5stack/hal/src/inc" --include_path="C:/TI/simplelink_cc26x2_sdk_2_20_00_36/source/ti/ble5stack/heapmgr" --include_path="C:/TI/simplelink_cc26x2_sdk_2_20_00_36/source/ti/ble5stack/icall/src/inc" --include_path="C:/TI/simplelink_cc26x2_sdk_2_20_00_36/source/ti/ble5stack/osal/src/inc" --include_path="C:/TI/simplelink_cc26x2_sdk_2_20_00_36/source/ti/ble5stack/services/src/saddr" --include_path="C:/TI/simplelink_cc26x2_sdk_2_20_00_36/source/ti/ble5stack/services/src/sdata" --include_path="C:/TI/simplelink_cc26x2_sdk_2_20_00_36/source/ti/ble5stack/services/src/nv" --include_path="C:/TI/simplelink_cc26x2_sdk_2_20_00_36/source/ti/ble5stack/services/src/nv/cc26xx" --include_path="C:/TI/simplelink_cc26x2_sdk_2_20_00_36/source/ti/devices/cc13x2_cc26x2_v1" --include_path="C:/TI/ccsv8/tools/compiler/ti-cgt-arm_18.1.5.LTS/include" --define=DeviceFamily_CC26X2 --define=uartlog_FILE="\"Primitives_Button.c\"" -g --c99 --gcc --diag_warning=225 --diag_wrap=off --display_error_number --gen_func_subsections=on --abi=eabi --preproc_with_compile --preproc_dependency="images/Primitives_Button.d_raw" --obj_directory="images" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: "$<"'
	@echo ' '

images/TI_logo_150x150.obj: ../images/TI_logo_150x150.c $(GEN_OPTS) | $(GEN_FILES)
	@echo 'Building file: "$<"'
	@echo 'Invoking: ARM Compiler'
	"C:/TI/ccsv8/tools/compiler/ti-cgt-arm_18.1.5.LTS/bin/armcl" --cmd_file="C:/workspace_v8/ble5_project_zero_cc26x2r1lp_app/TOOLS/defines/ble5_project_zero_cc26x2r1lp_app_FlashROM_Debug.opt" --cmd_file="C:/TI/simplelink_cc26x2_sdk_2_20_00_36/source/ti/ble5stack/config/build_components.opt" --cmd_file="C:/TI/simplelink_cc26x2_sdk_2_20_00_36/source/ti/ble5stack/config/factory_config.opt" --cmd_file="C:/workspace_v8/ble5_project_zero_cc26x2r1lp_stack_library/TOOLS/build_config.opt"  -mv7M4 --code_state=16 -me -O2 --opt_for_speed=0 --include_path="C:/workspace_v8/ble5_project_zero_cc26x2r1lp_app" --include_path="C:/workspace_v8/ble5_project_zero_cc26x2r1lp_app/Application" --include_path="C:/workspace_v8/ble5_project_zero_cc26x2r1lp_app/LcdDriver" --include_path="C:/workspace_v8/ble5_project_zero_cc26x2r1lp_app/GrLib/grlib" --include_path="C:/workspace_v8/ble5_project_zero_cc26x2r1lp_app/Startup" --include_path="C:/workspace_v8/ble5_project_zero_cc26x2r1lp_app/PROFILES" --include_path="C:/workspace_v8/ble5_project_zero_cc26x2r1lp_app/Include" --include_path="C:/TI/simplelink_cc26x2_sdk_2_20_00_36/source/ti/ble5stack/controller/cc26xx/inc" --include_path="C:/TI/simplelink_cc26x2_sdk_2_20_00_36/source/ti/ble5stack/inc" --include_path="C:/TI/simplelink_cc26x2_sdk_2_20_00_36/source/ti/ble5stack/rom" --include_path="C:/TI/simplelink_cc26x2_sdk_2_20_00_36/source/ti/ble5stack/common/cc26xx" --include_path="C:/TI/simplelink_cc26x2_sdk_2_20_00_36/source/ti/" --include_path="C:/TI/simplelink_cc26x2_sdk_2_20_00_36/source/ti/ble5stack/icall/inc" --include_path="C:/TI/simplelink_cc26x2_sdk_2_20_00_36/source/ti/ble5stack/target" --include_path="C:/TI/simplelink_cc26x2_sdk_2_20_00_36/source/ti/common/" --include_path="C:/TI/simplelink_cc26x2_sdk_2_20_00_36/source/ti/ble5stack/hal/src/target/_common" --include_path="C:/TI/simplelink_cc26x2_sdk_2_20_00_36/source/ti/ble5stack/hal/src/target/_common/cc26xx" --include_path="C:/TI/simplelink_cc26x2_sdk_2_20_00_36/source/ti/ble5stack/profiles/oad/cc26xx" --include_path="C:/TI/simplelink_cc26x2_sdk_2_20_00_36/source/ti/ble5stack/hal/src/inc" --include_path="C:/TI/simplelink_cc26x2_sdk_2_20_00_36/source/ti/ble5stack/heapmgr" --include_path="C:/TI/simplelink_cc26x2_sdk_2_20_00_36/source/ti/ble5stack/icall/src/inc" --include_path="C:/TI/simplelink_cc26x2_sdk_2_20_00_36/source/ti/ble5stack/osal/src/inc" --include_path="C:/TI/simplelink_cc26x2_sdk_2_20_00_36/source/ti/ble5stack/services/src/saddr" --include_path="C:/TI/simplelink_cc26x2_sdk_2_20_00_36/source/ti/ble5stack/services/src/sdata" --include_path="C:/TI/simplelink_cc26x2_sdk_2_20_00_36/source/ti/ble5stack/services/src/nv" --include_path="C:/TI/simplelink_cc26x2_sdk_2_20_00_36/source/ti/ble5stack/services/src/nv/cc26xx" --include_path="C:/TI/simplelink_cc26x2_sdk_2_20_00_36/source/ti/devices/cc13x2_cc26x2_v1" --include_path="C:/TI/ccsv8/tools/compiler/ti-cgt-arm_18.1.5.LTS/include" --define=DeviceFamily_CC26X2 --define=uartlog_FILE="\"TI_logo_150x150.c\"" -g --c99 --gcc --diag_warning=225 --diag_wrap=off --display_error_number --gen_func_subsections=on --abi=eabi --preproc_with_compile --preproc_dependency="images/TI_logo_150x150.d_raw" --obj_directory="images" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: "$<"'
	@echo ' '

images/TI_platform_bar_red.obj: ../images/TI_platform_bar_red.c $(GEN_OPTS) | $(GEN_FILES)
	@echo 'Building file: "$<"'
	@echo 'Invoking: ARM Compiler'
	"C:/TI/ccsv8/tools/compiler/ti-cgt-arm_18.1.5.LTS/bin/armcl" --cmd_file="C:/workspace_v8/ble5_project_zero_cc26x2r1lp_app/TOOLS/defines/ble5_project_zero_cc26x2r1lp_app_FlashROM_Debug.opt" --cmd_file="C:/TI/simplelink_cc26x2_sdk_2_20_00_36/source/ti/ble5stack/config/build_components.opt" --cmd_file="C:/TI/simplelink_cc26x2_sdk_2_20_00_36/source/ti/ble5stack/config/factory_config.opt" --cmd_file="C:/workspace_v8/ble5_project_zero_cc26x2r1lp_stack_library/TOOLS/build_config.opt"  -mv7M4 --code_state=16 -me -O2 --opt_for_speed=0 --include_path="C:/workspace_v8/ble5_project_zero_cc26x2r1lp_app" --include_path="C:/workspace_v8/ble5_project_zero_cc26x2r1lp_app/Application" --include_path="C:/workspace_v8/ble5_project_zero_cc26x2r1lp_app/LcdDriver" --include_path="C:/workspace_v8/ble5_project_zero_cc26x2r1lp_app/GrLib/grlib" --include_path="C:/workspace_v8/ble5_project_zero_cc26x2r1lp_app/Startup" --include_path="C:/workspace_v8/ble5_project_zero_cc26x2r1lp_app/PROFILES" --include_path="C:/workspace_v8/ble5_project_zero_cc26x2r1lp_app/Include" --include_path="C:/TI/simplelink_cc26x2_sdk_2_20_00_36/source/ti/ble5stack/controller/cc26xx/inc" --include_path="C:/TI/simplelink_cc26x2_sdk_2_20_00_36/source/ti/ble5stack/inc" --include_path="C:/TI/simplelink_cc26x2_sdk_2_20_00_36/source/ti/ble5stack/rom" --include_path="C:/TI/simplelink_cc26x2_sdk_2_20_00_36/source/ti/ble5stack/common/cc26xx" --include_path="C:/TI/simplelink_cc26x2_sdk_2_20_00_36/source/ti/" --include_path="C:/TI/simplelink_cc26x2_sdk_2_20_00_36/source/ti/ble5stack/icall/inc" --include_path="C:/TI/simplelink_cc26x2_sdk_2_20_00_36/source/ti/ble5stack/target" --include_path="C:/TI/simplelink_cc26x2_sdk_2_20_00_36/source/ti/common/" --include_path="C:/TI/simplelink_cc26x2_sdk_2_20_00_36/source/ti/ble5stack/hal/src/target/_common" --include_path="C:/TI/simplelink_cc26x2_sdk_2_20_00_36/source/ti/ble5stack/hal/src/target/_common/cc26xx" --include_path="C:/TI/simplelink_cc26x2_sdk_2_20_00_36/source/ti/ble5stack/profiles/oad/cc26xx" --include_path="C:/TI/simplelink_cc26x2_sdk_2_20_00_36/source/ti/ble5stack/hal/src/inc" --include_path="C:/TI/simplelink_cc26x2_sdk_2_20_00_36/source/ti/ble5stack/heapmgr" --include_path="C:/TI/simplelink_cc26x2_sdk_2_20_00_36/source/ti/ble5stack/icall/src/inc" --include_path="C:/TI/simplelink_cc26x2_sdk_2_20_00_36/source/ti/ble5stack/osal/src/inc" --include_path="C:/TI/simplelink_cc26x2_sdk_2_20_00_36/source/ti/ble5stack/services/src/saddr" --include_path="C:/TI/simplelink_cc26x2_sdk_2_20_00_36/source/ti/ble5stack/services/src/sdata" --include_path="C:/TI/simplelink_cc26x2_sdk_2_20_00_36/source/ti/ble5stack/services/src/nv" --include_path="C:/TI/simplelink_cc26x2_sdk_2_20_00_36/source/ti/ble5stack/services/src/nv/cc26xx" --include_path="C:/TI/simplelink_cc26x2_sdk_2_20_00_36/source/ti/devices/cc13x2_cc26x2_v1" --include_path="C:/TI/ccsv8/tools/compiler/ti-cgt-arm_18.1.5.LTS/include" --define=DeviceFamily_CC26X2 --define=uartlog_FILE="\"TI_platform_bar_red.c\"" -g --c99 --gcc --diag_warning=225 --diag_wrap=off --display_error_number --gen_func_subsections=on --abi=eabi --preproc_with_compile --preproc_dependency="images/TI_platform_bar_red.d_raw" --obj_directory="images" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: "$<"'
	@echo ' '

images/lcd_color_320x240.obj: ../images/lcd_color_320x240.c $(GEN_OPTS) | $(GEN_FILES)
	@echo 'Building file: "$<"'
	@echo 'Invoking: ARM Compiler'
	"C:/TI/ccsv8/tools/compiler/ti-cgt-arm_18.1.5.LTS/bin/armcl" --cmd_file="C:/workspace_v8/ble5_project_zero_cc26x2r1lp_app/TOOLS/defines/ble5_project_zero_cc26x2r1lp_app_FlashROM_Debug.opt" --cmd_file="C:/TI/simplelink_cc26x2_sdk_2_20_00_36/source/ti/ble5stack/config/build_components.opt" --cmd_file="C:/TI/simplelink_cc26x2_sdk_2_20_00_36/source/ti/ble5stack/config/factory_config.opt" --cmd_file="C:/workspace_v8/ble5_project_zero_cc26x2r1lp_stack_library/TOOLS/build_config.opt"  -mv7M4 --code_state=16 -me -O2 --opt_for_speed=0 --include_path="C:/workspace_v8/ble5_project_zero_cc26x2r1lp_app" --include_path="C:/workspace_v8/ble5_project_zero_cc26x2r1lp_app/Application" --include_path="C:/workspace_v8/ble5_project_zero_cc26x2r1lp_app/LcdDriver" --include_path="C:/workspace_v8/ble5_project_zero_cc26x2r1lp_app/GrLib/grlib" --include_path="C:/workspace_v8/ble5_project_zero_cc26x2r1lp_app/Startup" --include_path="C:/workspace_v8/ble5_project_zero_cc26x2r1lp_app/PROFILES" --include_path="C:/workspace_v8/ble5_project_zero_cc26x2r1lp_app/Include" --include_path="C:/TI/simplelink_cc26x2_sdk_2_20_00_36/source/ti/ble5stack/controller/cc26xx/inc" --include_path="C:/TI/simplelink_cc26x2_sdk_2_20_00_36/source/ti/ble5stack/inc" --include_path="C:/TI/simplelink_cc26x2_sdk_2_20_00_36/source/ti/ble5stack/rom" --include_path="C:/TI/simplelink_cc26x2_sdk_2_20_00_36/source/ti/ble5stack/common/cc26xx" --include_path="C:/TI/simplelink_cc26x2_sdk_2_20_00_36/source/ti/" --include_path="C:/TI/simplelink_cc26x2_sdk_2_20_00_36/source/ti/ble5stack/icall/inc" --include_path="C:/TI/simplelink_cc26x2_sdk_2_20_00_36/source/ti/ble5stack/target" --include_path="C:/TI/simplelink_cc26x2_sdk_2_20_00_36/source/ti/common/" --include_path="C:/TI/simplelink_cc26x2_sdk_2_20_00_36/source/ti/ble5stack/hal/src/target/_common" --include_path="C:/TI/simplelink_cc26x2_sdk_2_20_00_36/source/ti/ble5stack/hal/src/target/_common/cc26xx" --include_path="C:/TI/simplelink_cc26x2_sdk_2_20_00_36/source/ti/ble5stack/profiles/oad/cc26xx" --include_path="C:/TI/simplelink_cc26x2_sdk_2_20_00_36/source/ti/ble5stack/hal/src/inc" --include_path="C:/TI/simplelink_cc26x2_sdk_2_20_00_36/source/ti/ble5stack/heapmgr" --include_path="C:/TI/simplelink_cc26x2_sdk_2_20_00_36/source/ti/ble5stack/icall/src/inc" --include_path="C:/TI/simplelink_cc26x2_sdk_2_20_00_36/source/ti/ble5stack/osal/src/inc" --include_path="C:/TI/simplelink_cc26x2_sdk_2_20_00_36/source/ti/ble5stack/services/src/saddr" --include_path="C:/TI/simplelink_cc26x2_sdk_2_20_00_36/source/ti/ble5stack/services/src/sdata" --include_path="C:/TI/simplelink_cc26x2_sdk_2_20_00_36/source/ti/ble5stack/services/src/nv" --include_path="C:/TI/simplelink_cc26x2_sdk_2_20_00_36/source/ti/ble5stack/services/src/nv/cc26xx" --include_path="C:/TI/simplelink_cc26x2_sdk_2_20_00_36/source/ti/devices/cc13x2_cc26x2_v1" --include_path="C:/TI/ccsv8/tools/compiler/ti-cgt-arm_18.1.5.LTS/include" --define=DeviceFamily_CC26X2 --define=uartlog_FILE="\"lcd_color_320x240.c\"" -g --c99 --gcc --diag_warning=225 --diag_wrap=off --display_error_number --gen_func_subsections=on --abi=eabi --preproc_with_compile --preproc_dependency="images/lcd_color_320x240.d_raw" --obj_directory="images" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: "$<"'
	@echo ' '

