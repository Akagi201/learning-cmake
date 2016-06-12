cmake_minimum_required(VERSION 2.8)

project(config)

# This is the directory for our custom CMake modules.
set(CMAKE_MODULE_PATH ${CMAKE_SOURCE_DIR}/cmake)

# Handle config options
include(config)

# Handle build options
include(build)

# setup our configuration headers
CONFIGURE_FILE(${CMAKE_MODULE_PATH}/build.h.in ${CMAKE_BINARY_DIR}/build.h)
CONFIGURE_FILE(${CMAKE_MODULE_PATH}/config.h.in ${CMAKE_BINARY_DIR}/config.h)
