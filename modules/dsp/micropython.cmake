
# Create an INTERFACE library for our C module.
add_library(dmath INTERFACE)

# Add our source files to the lib
target_sources(dmath INTERFACE
    ${CMAKE_CURRENT_LIST_DIR}/dmath.c
)

# Add the current directory as an include directory.
target_include_directories(dmath INTERFACE
    ${CMAKE_CURRENT_LIST_DIR}
)

# Link our INTERFACE library to the usermod target.
target_link_libraries(dm INTERFACE dmath)
