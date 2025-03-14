# Add executable. Default name is the project name, version 0.1

add_executable(led_dimmer led_dimmer.c )

pico_set_program_name(led_dimmer "led_dimmer")
pico_set_program_version(led_dimmer "0.1")

# Modify the below lines to enable/disable output over UART/USB
pico_enable_stdio_uart(led_dimmer 0)
pico_enable_stdio_usb(led_dimmer 0)

# Add the standard library to the build
target_link_libraries(led_dimmer
        pico_stdlib hardware_adc hardware_pwm)

# Add the standard include files to the build
target_include_directories(led_dimmer PRIVATE
        ${CMAKE_CURRENT_LIST_DIR}
)

pico_add_extra_outputs(led_dimmer)
