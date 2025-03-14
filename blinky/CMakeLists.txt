# Add executable. Default name is the project name, version 0.1
add_executable(blinky blinky.c )

pico_set_program_name(blinky "blinky")
pico_set_program_version(blinky "0.1")

# Modify the below lines to enable/disable output over UART/USB
pico_enable_stdio_uart(blinky 0)
pico_enable_stdio_usb(blinky 0)

# Add the standard library to the build
target_link_libraries(blinky
        pico_stdlib)

# Add the standard include files to the build
target_include_directories(blinky PRIVATE
        ${CMAKE_CURRENT_LIST_DIR}
)

pico_add_extra_outputs(blinky)
