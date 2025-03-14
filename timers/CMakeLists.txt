# Add executable. Default name is the project name, version 0.1

add_executable(timers timers.c )

pico_set_program_name(timers "timers")
pico_set_program_version(timers "0.1")

# Modify the below lines to enable/disable output over UART/USB
pico_enable_stdio_uart(timers 0)
pico_enable_stdio_usb(timers 0)

# Add the standard library to the build
target_link_libraries(timers
        pico_stdlib)

# Add the standard include files to the build
target_include_directories(timers PRIVATE
        ${CMAKE_CURRENT_LIST_DIR}
)

# Add any user requested libraries
target_link_libraries(timers

        )

pico_add_extra_outputs(timers)
