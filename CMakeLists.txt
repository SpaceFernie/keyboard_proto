cmake_minimum_required(VERSION 3.27)

project(keyboard-proto VERSION 0.1.0)
enable_language(C ASM)
set(CMAKE_C_STANDARD 99)
set(CMAKE_C_STANDARD_REQUIRED ON)
set(CMAKE_C_EXTENSIONS OFF)
set(CMAKE_C_COMPILER_FORCED 1)
set(MCU_FAMILY STM32G0xx)
set(MCU_MODEL STM32G0B1)
set(CPU_PARAMETERS
    -mcpu=cortex-m0plus
    -mthumb)

add_subdirectory(./src)

add_executable(${CMAKE_PROJECT_NAME})

target_include_directories(${CMAKE_PROJECT_NAME} PRIVATE
                           "${PROJECT_BINARY_DIR}"
                           "${PROJECT_SOURCE_DIR}/src")

set(STARTUP_SCRIPT
    "${CMAKE_CURRENT_SOURCE_DIR}/lib/libstm32g0/startup/startup_stm32g0b1xx.s")
set(MCU_LINKER_SCRIPT
    "${CMAKE_CURRENT_SOURCE_DIR}/lib/libstm32g0/linker/STM32G0B1xx_FLASH.ld")

target_compile_options(${CMAKE_PROJECT_NAME} PRIVATE
                        ${CPU_PARAMETERS}
                        -Wall
                        -Wextra
                        -Wpedantic
                        -Werror
                        $<$<CONFIG:Debug>:-Og -g3 -ggdb>
                        $<$<CONFIG:Release>:-Og -g0>)
