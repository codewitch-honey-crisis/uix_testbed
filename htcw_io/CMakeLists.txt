# version 3.11 or later of CMake or needed later for installing GoogleTest
# so let's require it now.
cmake_minimum_required(VERSION 3.11-3.18)

project(htcw_io)

add_library(io_stream src/io_stream.cpp)

target_include_directories(io_stream
    PUBLIC ${PROJECT_SOURCE_DIR})

target_compile_features(io_stream PUBLIC cxx_std_17)
