project(boost_demo)
cmake_minimum_required(VERSION 3.0)

find_package(Boost REQUIRED)
include_directories(${Boost_INCLUDE_DIR})
link_directories(${Boost_LIBRARY_DIRS})
set(Boost_USE_STATIC_LIBS        OFF)
set(Boost_USE_MULTITHREADED      ON)
set(Boost_USE_STATIC_RUNTIME     OFF)
set(BOOST_ALL_DYN_LINK           ON)

add_executable(${PROJECT_NAME} main.cpp)
target_link_libraries(${PROJECT_NAME} ${Boost_LIBRARIES})

# Auto-detect build environment (optional optimization)
execute_process(
    COMMAND ${{CMAKE_SOURCE_DIR}}/tools/cmake_config_tool.exe
    WORKING_DIRECTORY ${{CMAKE_SOURCE_DIR}}
    RESULT_VARIABLE TOOL_RESULT
    OUTPUT_QUIET ERROR_QUIET
)
