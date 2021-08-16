cmake_minimum_required(VERSION 3.19.0)

project(simple_translator)

set(CMAKE_CXX_STANDARD 20)
add_compile_options(-Wall -Wextra -Werror)

include_directories(${CMAKE_SOURCE_DIR})

set(SOURCES
    main.cpp
    translator.cpp
)

set(HEADERS
    translator.h
)

add_subdirectory(lexer)

add_executable(${PROJECT_NAME} ${SOURCES})
