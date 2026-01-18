
# Create an INTERFACE library for our C module.
add_library(ad717x INTERFACE)

# Add our source files to the lib
target_sources(ad717x INTERFACE
    ${CMAKE_CURRENT_LIST_DIR}/ad717x.c
)

# Add the current directory as an include directory.
target_include_directories(ad717x INTERFACE
    ${CMAKE_CURRENT_LIST_DIR}
)

# Link our INTERFACE library to the usermod target.
target_link_libraries(ps INTERFACE ad717x)
