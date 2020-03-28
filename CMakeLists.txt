cmake_minimum_required(VERSION 3.16)
project(RePair VERSION 1.0.0)

include_directories(AFTER
    ${PROJECT_SOURCE_DIR}/include
    )
link_directories(
    ${PROJECT_SOURCE_DIR}/lib
    )

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

add_compile_options(-Wall
    $<$<CONFIG:Release>:"SHELL: -O3">
    $<$<CONFIG:Debug>:"SHELL: -O0 -g">
    $<$<CONFIG:RelWithDebgInfo>:"SHELL: -O3 -g">
    )

add_compile_definitions(
    $<$<NOT:$<CONFIG:Debug>>:NDEBUG>
    )

add_subdirectory(src)
add_subdirectory(test)
