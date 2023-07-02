cmake_minimum_required(VERSION 3.9)

project(huffman-parallel)

find_package(OpenMP REQUIRED)

set(CMAKE_C_STANDARD 99)

add_executable(serial_compression src/serial_compression.c src/minheap.c src/huffman.c)
# add_executable(parallel src/matmul-parallel.c)

target_link_libraries(serial_compression
    PUBLIC OpenMP::OpenMP_C)

# target_link_libraries(parallel
#     PUBLIC OpenMP::OpenMP_C)
