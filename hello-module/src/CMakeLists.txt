cmake_minimum_required(VERSION 2.8.4)

find_package(HELLO)

if(HELLO_FOUND)
  add_executable(hello main.c)
  include_directories(${HELLO_INCLUDE_DIR})
  target_link_libraries(hello ${HELLO_LIBRARY})
else(HELLO_FOUND)
  message(FATAL_ERROR "HELLO library not found")
endif(HELLO_FOUND)

set(EXECUTABLE_OUTPUT_PATH ${PROJECT_BINARY_DIR}/bin)
