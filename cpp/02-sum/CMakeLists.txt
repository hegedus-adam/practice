cmake_minimum_required(VERSION 3.10)
project(Sum CXX)

set(CMAKE_CXX_STANDARD 17)

# Application for summing two numbers
add_executable(sum main.cpp sum.cpp)

# GTest configuration (download with CMake)
include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/refs/heads/main.zip
)
# Csak egyszer kell az alábbi két sor, ha több FetchContent van
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

# Test
enable_testing()
add_executable(test_sum test_sum.cpp sum.cpp)
target_link_libraries(test_sum gtest_main)
include(GoogleTest)
gtest_discover_tests(test_sum)
