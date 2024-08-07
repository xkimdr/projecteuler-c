cmake_minimum_required(VERSION 3.30)
project(projecteuler-c C CXX) 

set(CMAKE_C_STANDARD 23)
set(CMAKE_C_STANDARD_REQUIRED ON)
set(CMAKE_C_EXTENSIONS OFF)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

file(GLOB PROB_SOURCES src/prob/*.c)
add_executable(projecteuler-c src/pe.c ${PROB_SOURCES})
target_include_directories(projecteuler-c PRIVATE include)
target_link_libraries(projecteuler-c PRIVATE m)
target_compile_options(projecteuler-c PRIVATE -Werror -Wall -Wextra -Wconversion -Wsign-conversion -pedantic-errors)

enable_testing()
find_package(GTest REQUIRED)
include(GoogleTest)
include(CTest)

add_executable(projecteuler-c-test test/prob_test.cpp ${PROB_SOURCES})
target_include_directories(projecteuler-c-test PRIVATE include)
target_link_libraries(projecteuler-c-test GTest::gmock GTest::gmock_main)
target_compile_options(projecteuler-c-test PRIVATE -Werror -Wall -Wextra -Wconversion -Wsign-conversion -pedantic-errors)
gtest_discover_tests(projecteuler-c-test)