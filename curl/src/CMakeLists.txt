cmake_minimum_required(VERSION 2.8.4)

add_executable(curltest main.c)

find_package(curl)

if(CURL_FOUND)
  include_directories(${CURL_INCLUDE_DIR})
  target_link_libraries(curltest ${CURL_LIBRARY})
elseif(CURL_FOUND)
  message(fatal_error "CURL library not found")
endif(CURL_FOUND)

set(EXECUTABLE_OUTPUT_PATH ${PROJECT_BINARY_DIR}/bin)
