cmake_minimum_required(VERSION 3.7.1 FATAL_ERROR)

### Hunter snapshot that will be used ###
include("cmake/HunterGate.cmake")
HunterGate(
        URL "https://github.com/ruslo/hunter/archive/v0.18.16.tar.gz"
        SHA1 "6cbca2b0e7605ad8ea22ee3527850996436f71b8"
)

project(hunter_simple CXX)

### Download dependencies ###
hunter_add_package(GTest)

### Find dependencies ###
find_package(GTest CONFIG REQUIRED) # GTest::main

### Targets ###
add_executable(hunter_simple module.cc module_test.cc)
target_link_libraries(hunter_simple PUBLIC GTest::main)

### Testing ###
enable_testing()

add_test(NAME SimpleTest COMMAND hunter_simple)
