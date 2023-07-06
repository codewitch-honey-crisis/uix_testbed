
# version 3.11 or later of CMake or needed later 
# so let's require it now.
cmake_minimum_required(VERSION 3.11-3.18)

# Project's name

project(uix_testbed)
# Set the output folder where your program will be created
set(CMAKE_BINARY_DIR ${CMAKE_SOURCE_DIR})
set(EXECUTABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR})
set(LIBRARY_OUTPUT_PATH ${CMAKE_BINARY_DIR})

include_directories(AFTER SYSTEM ${CMAKE_SOURCE_DIR}/htcw_bits/include)
include_directories(AFTER SYSTEM ${CMAKE_SOURCE_DIR}/htcw_data/include)
include_directories(AFTER SYSTEM ${CMAKE_SOURCE_DIR}/htcw_io/include)
include_directories(AFTER SYSTEM ${CMAKE_SOURCE_DIR}/htcw_ml/include)
include_directories(AFTER SYSTEM ${CMAKE_SOURCE_DIR}/htcw_gfx/include)
include_directories(AFTER SYSTEM ${CMAKE_SOURCE_DIR}/htcw_uix/include)

add_subdirectory(htcw_bits)
add_subdirectory(htcw_io)
add_subdirectory(htcw_data)
add_subdirectory(htcw_gfx)
add_subdirectory(htcw_uix)

add_executable(main main.cpp)

target_link_libraries(main
    PRIVATE io_stream)
target_link_libraries(main
    PRIVATE miniz)
target_link_libraries(main
    PRIVATE pngle)
target_link_libraries(main
    PRIVATE gfx_math)
target_link_libraries(main
    PRIVATE gfx_pixel)
target_link_libraries(main
    PRIVATE gfx_svg_doc)
target_link_libraries(main
    PRIVATE gfx_open_font)
target_link_libraries(main
    PRIVATE gfx_font)
target_link_libraries(main
    PRIVATE gfx_image)
target_link_libraries(main
    PRIVATE gfx_drawing)

    # Tell C++ compiler to use C++17
target_compile_features(main PUBLIC cxx_std_17)

# The following folder will be included
include_directories("${PROJECT_SOURCE_DIR}")
