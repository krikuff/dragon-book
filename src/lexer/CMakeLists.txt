cmake_minimum_required(VERSION 3.19.0)

project(lexer)

set(HEADERS
    number.h
    word.h
    token.h
    lexer.h
)

set(SOURCES
    number.cpp
    word.cpp
    token.cpp
    lexer.cpp
)

add_library(${PROJECT_NAME} STATIC ${SOURCES})
