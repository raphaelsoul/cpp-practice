project(config)

set(SOURCE_FILES main.cpp)
add_executable(config ${SOURCE_FILES})


set(Boost_USE_STATIC_LIBS OFF)
set(Boost_USE_STATIC_RUNTIME OFF)
find_package(Boost REQUIRED)
if (Boost_FOUND)
    include_directories(${Boost_INCLUDE_DIRS})
    target_link_libraries(config ${Boost_LIBRARIES})
endif (Boost_FOUND)