cmake_minimum_required(VERSION 3.30...3.31)
project(gilded-rose-refactoring-kata-cpp)

#set(gtest_force_shared_crt OFF CACHE BOOL "" FORCE)
# Force Google Test to link the C/C++ runtimes dynamically when
# building on Visual Studio
# Link:
# * https://github.com/google/googletest/tree/release-1.8.1/googletest#visual-studio-dynamic-vs-static-runtimes
# if (MSVC)
#   set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
# endif()

# uncomment this line to enable coverage measurements using gcov
# set(CMAKE_CXX_FLAGS "--coverage")

add_subdirectory(src)
add_subdirectory(test)
