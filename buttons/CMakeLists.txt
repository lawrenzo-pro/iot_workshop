# Add executable. Default name is the project name, version 0.1

add_executable(buttons buttons.c )

pico_set_program_name(buttons "buttons")
pico_set_program_version(buttons "0.1")

# Modify the below lines to enable/disable output over UART/USB
pico_enable_stdio_uart(buttons 0)
pico_enable_stdio_usb(buttons 1)

# Add the standard library to the build
target_link_libraries(buttons
        pico_stdlib)

# Add the standard include files to the build
target_include_directories(buttons PRIVATE
        ${CMAKE_CURRENT_LIST_DIR}
)

pico_add_extra_outputs(buttons)
