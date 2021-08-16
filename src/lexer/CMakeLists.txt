cmake_minimum_required(VERSION 3.19.0)

project(lexer)

set(HEADERS
    lexer.h
    number.h
    token.h
    word.h
)

set(SOURCES
    lexer.cpp
    number.cpp
    token.cpp
    word.cpp
)

add_library(${PROJECT_NAME} STATIC ${HEADERS} ${SOURCES})
