cmake_minimum_required(VERSION 3.14)
project(CMakeX)
include(DependenciesX.cmake)

set(CMAKE_CXX_STANDARD 17)
add_subdirectory(dummy_lib_2)
add_subdirectory(dummy_lib)
add_subdirectory(dummy)

recursive_collect_include_directories(dummy_target DUMMY_ALL_INCLUDES)
message("Dummy includes are: '${DUMMY_ALL_INCLUDES}'")
recursive_collect_link_libraries(dummy_target DUMMY_ALL_LIBS)
message("Dummy libraries are: '${DUMMY_ALL_LIBS}'")
