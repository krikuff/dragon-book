cmake_minimum_required(VERSION 3.19.0)

project(parser)

set(HEADERS
    parser.h
)

set(SOURCES
    main.cpp
    parser.cpp
)

add_executable(${PROJECT_NAME} ${HEADERS} ${SOURCES})
