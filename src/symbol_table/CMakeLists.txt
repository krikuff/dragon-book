cmake_minimum_required(VERSION 3.19.0)

project(symbol_table)

set(HEADERS
    symbol.h
    env.h
)

set(SOURCES
    env.cpp
)

add_library(${PROJECT_NAME} STATIC ${HEADERS} ${SOURCES})
