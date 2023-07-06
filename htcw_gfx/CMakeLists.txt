# version 3.11 or later of CMake or needed later for installing GoogleTest
# so let's require it now.
cmake_minimum_required(VERSION 3.11-3.18)

project(htcw_gfx)

add_library(miniz src/miniz.c)
add_library(pngle src/pngle.c)
add_library(gfx_math src/gfx_math.cpp)
add_library(gfx_pixel src/gfx_pixel.cpp)
add_library(gfx_font src/gfx_font.cpp)
add_library(gfx_open_font src/gfx_open_font.cpp)
add_library(gfx_image src/gfx_image.cpp)
add_library(gfx_svg_doc src/gfx_svg_doc.cpp)
add_library(gfx_drawing src/gfx_drawing.cpp)

target_include_directories(miniz
    PUBLIC ${PROJECT_SOURCE_DIR})

target_include_directories(pngle
    PUBLIC ${PROJECT_SOURCE_DIR})

    
target_include_directories(gfx_math
    PUBLIC ${PROJECT_SOURCE_DIR}/include)


target_include_directories(gfx_pixel
    PUBLIC ${PROJECT_SOURCE_DIR}/include)

    
target_include_directories(gfx_font
    PUBLIC ${PROJECT_SOURCE_DIR}/include)

target_include_directories(gfx_open_font
    PUBLIC ${PROJECT_SOURCE_DIR}/include)

target_include_directories(gfx_image
    PUBLIC ${PROJECT_SOURCE_DIR}/include)

target_include_directories(gfx_svg_doc
    PUBLIC ${PROJECT_SOURCE_DIR}/include)

target_include_directories(gfx_drawing
    PUBLIC ${PROJECT_SOURCE_DIR}/include)


target_compile_features(miniz PUBLIC c_std_11)
target_compile_features(pngle PUBLIC c_std_11)

target_compile_features(gfx_math PUBLIC cxx_std_17)
target_compile_features(gfx_pixel PUBLIC cxx_std_17)
target_compile_features(gfx_font PUBLIC cxx_std_17)
target_compile_features(gfx_open_font PUBLIC cxx_std_17)
target_compile_features(gfx_image PUBLIC cxx_std_17)
target_compile_features(gfx_svg_doc PUBLIC cxx_std_17)
target_compile_features(gfx_drawing PUBLIC cxx_std_17)