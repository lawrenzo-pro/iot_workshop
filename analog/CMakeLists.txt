add_executable(analog analog.c )

pico_set_program_name(analog "analog")
pico_set_program_version(analog "0.1")

# Modify the below lines to enable/disable output over UART/USB
pico_enable_stdio_uart(analog 0)
pico_enable_stdio_usb(analog 1)

# Add the standard library to the build
target_link_libraries(analog
        pico_stdlib hardware_adc)

# Add the standard include files to the build
target_include_directories(analog PRIVATE
        ${CMAKE_CURRENT_LIST_DIR}
)

pico_add_extra_outputs(analog)
