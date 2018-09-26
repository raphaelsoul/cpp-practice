cmake_minimum_required(VERSION 3.12)
project(cpp-tutorial)

set(CMAKE_CXX_STANDARD 11)
set(3RD_ROOT "${PROJECT_SOURCE_DIR}/3rdParty")

add_subdirectory(hello)
add_subdirectory(algorithm)
add_subdirectory(config)
add_subdirectory(json)
add_subdirectory(template)
