cmake_minimum_required(VERSION 3.27)

set(PROJECT_VERSION     "0.1.0")
set(PROJECT_DESCRIPTION "Keyboard prototype firmware")

project("keyboard-proto"
        VERSION ${PROJECT_VERSION}
        DESCRIPTION ${PROJECT_DESCRIPTION})
set(MCU_FAMILY STM32G0xx)
set(MCU_MODEL STM32G0B1)
set(CPU_PARAMETERS
    -mcpu=cortex-m0plus
    -mthumb)
set(STARTUP_SCRIPT
    ${CMAKE_CURRENT_SOURCE_DIR}/lib/libstm32g0/startup/startup_stm32g0b1xx.s)
set(MCU_LINKER_SCRIPT
    ${CMAKE_CURRENT_SOURCE_DIR}/lib/libstm32g0/linker/STM32G0B1xx_FLASH.ld)

enable_language(C ASM)
set(CMAKE_C_STANDARD 99)
set(CMAKE_C_STANDARD_REQUIRED ON)
set(CMAKE_C_EXTENSIONS OFF)
set(CMAKE_C_COMPILER_FORCED 1)

add_subdirectory(./src)
add_subdirectory(./lib/libstm32g0)

add_executable(${CMAKE_PROJECT_NAME})
target_sources(${PROJECT_NAME} PRIVATE src/main.c)
target_link_libraries(${PROJECT_NAME} libstm32g0)

target_compile_options(${CMAKE_PROJECT_NAME} PRIVATE
                        ${CPU_PARAMETERS}
                        -Wall
                        -Wextra
                        -Wpedantic
                        $<$<CONFIG:Debug>:-Og -g3 -ggdb>
                        $<$<CONFIG:Release>:-Og -g0>)

target_link_options()
