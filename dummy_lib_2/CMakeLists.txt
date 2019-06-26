add_library(dummy_lib_2 header2.h)
set_target_properties(
        dummy_lib_2
        PROPERTIES
        LINKER_LANGUAGE CXX
)
target_include_directories(
        dummy_lib_2
        PUBLIC
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>
)