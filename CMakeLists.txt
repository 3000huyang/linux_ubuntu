cmake_minimum_required(VERSION 2.8)

project(Hello)


# The version number.
set(HELLO_VERSION_MAJOR 1)
set(HELLO_VERSION_MINOR 0)

# configure a header file to pass some of the CMake settings
# to the source code
configure_file(
    "${PROJECT_SOURCE_DIR}/HelloConfig.h.in"
    "${PROJECT_BINARY_DIR}/HelloConfig.h"
    )

# add the binary tree to the search path for include files
# so that we will find TutorialConfig.h
include_directories("${PROJECT_BINARY_DIR}")


add_executable(${PROJECT_NAME} "main.cpp")
