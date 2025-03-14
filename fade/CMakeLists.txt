# Add executable. Default name is the project name, version 0.1

add_executable(fade fade.c )

pico_set_program_name(fade "fade")
pico_set_program_version(fade "0.1")

# Modify the below lines to enable/disable output over UART/USB
pico_enable_stdio_uart(fade 0)
pico_enable_stdio_usb(fade 0)

# Add the standard library to the build
target_link_libraries(fade
        pico_stdlib hardware_pwm)

# Add the standard include files to the build
target_include_directories(fade PRIVATE
        ${CMAKE_CURRENT_LIST_DIR}
)

# Add any user requested libraries
target_link_libraries(fade

        )

pico_add_extra_outputs(fade)
