
# Create an INTERFACE library for our C module.
add_library(icdriver INTERFACE)

# Add our source files to the lib
target_sources(icdriver INTERFACE
    ${CMAKE_CURRENT_LIST_DIR}/Counter.c
    ${CMAKE_CURRENT_LIST_DIR}/Frequency.c
    ${CMAKE_CURRENT_LIST_DIR}/AD7175.c
)

# Add the current directory as an include directory.
target_include_directories(icdriver INTERFACE
    ${CMAKE_CURRENT_LIST_DIR}
)

# Link our INTERFACE library to the usermod target.
target_link_libraries(ic INTERFACE icdriver)
