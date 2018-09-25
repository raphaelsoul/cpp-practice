project(config)

set(SOURCE_FILES main.cpp)
add_executable(config ${SOURCE_FILES})

find_package(Boost REQUIRED COMPONENTS filesystem)

include_directories(${Boost_INCLUDE_DIRS})
target_link_libraries(config Boost::filesystem)