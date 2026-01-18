
# Create an INTERFACE library for our C module.
add_library(bus INTERFACE)

# Add our source files to the lib
target_sources(bus INTERFACE
    ${CMAKE_CURRENT_LIST_DIR}/myi2c.c
    ${CMAKE_CURRENT_LIST_DIR}/myspi.c
)

# Add the current directory as an include directory.
target_include_directories(bus INTERFACE
    ${CMAKE_CURRENT_LIST_DIR}
)

# Link our INTERFACE library to the usermod target.
target_link_libraries(busf INTERFACE bus)
