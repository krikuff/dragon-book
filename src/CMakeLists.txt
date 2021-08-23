cmake_minimum_required(VERSION 3.19.0)

project(dragon_book)

set(CMAKE_CXX_STANDARD 20)
add_compile_options(-Wall -Wextra -Werror)

include_directories(${CMAKE_SOURCE_DIR})

add_subdirectory(lexer)
add_subdirectory(parser)
add_subdirectory(symbol_table)
