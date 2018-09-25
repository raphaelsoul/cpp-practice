cmake_minimum_required(VERSION 3.12)

set(CMAKE_CXX_STANDARD 11)
set(3RD_ROOT "${PROJECT_SOURCE_DIR}/3rdParty")

project(cpp-tutorial)

add_subdirectory(hello)
add_subdirectory(algorithm)
add_subdirectory(config)
# add_subdirectory(json)

