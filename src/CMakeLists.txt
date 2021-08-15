cmake_minimum_required(VERSION 3.19.0)

project(simple_translator)

include_directories(${CMAKE_CURRENT_SOURCE_DIR})

set(SOURCES
    main.cpp
    translator.cpp
)

set(HEADERS
    translator.h
)

add_executable(${PROJECT_NAME} ${SOURCES})
