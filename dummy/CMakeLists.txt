add_executable(dummy_target main.cpp)
target_include_directories(
        dummy_target
        PUBLIC
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>
)
target_link_libraries(dummy_target dummy_lib)