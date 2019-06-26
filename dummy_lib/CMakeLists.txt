add_library(dummy_lib header.h)
set_target_properties(
        dummy_lib
        PROPERTIES
        LINKER_LANGUAGE CXX
)
target_include_directories(
        dummy_lib
        PUBLIC
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>

)
target_link_libraries(dummy_lib dummy_lib_2)