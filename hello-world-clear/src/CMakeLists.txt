cmake_minimum_required(VERSION 2.8.4)

add_executable(hello main.c)

SET(EXECUTABLE_OUTPUT_PATH ${PROJECT_BINARY_DIR}/bin)

INSTALL(TARGETS hello RUNTIME DESTINATION bin)
