# Add executable. Default name is the project name, version 0.1

add_executable(interrupts interrupts.c )

pico_set_program_name(interrupts "interrupts")
pico_set_program_version(interrupts "0.1")

# Modify the below lines to enable/disable output over UART/USB
pico_enable_stdio_uart(interrupts 0)
pico_enable_stdio_usb(interrupts 0)

# Add the standard library to the build
target_link_libraries(interrupts
        pico_stdlib)

# Add the standard include files to the build
target_include_directories(interrupts PRIVATE
        ${CMAKE_CURRENT_LIST_DIR}
)

# Add any user requested libraries
target_link_libraries(interrupts

        )

pico_add_extra_outputs(interrupts)
