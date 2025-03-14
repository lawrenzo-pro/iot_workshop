# Add executable. Default name is the project name, version 0.1

add_executable(hello hello.c )

pico_set_program_name(hello "hello")
pico_set_program_version(hello "0.1")

# Modify the below lines to enable/disable output over UART/USB
pico_enable_stdio_uart(hello 0)
pico_enable_stdio_usb(hello 1)

# Add the standard library to the build
target_link_libraries(hello
        pico_stdlib)

# Add the standard include files to the build
target_include_directories(hello PRIVATE
        ${CMAKE_CURRENT_LIST_DIR}
)

pico_add_extra_outputs(hello)
