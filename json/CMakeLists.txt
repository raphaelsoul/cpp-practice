set(SOURCE_FILES main.cpp JsonHelper.h JsonHelper.cpp)
add_executable(json ${SOURCE_FILES})

set_target_properties(json PROPERTIES
        ARCHIVE_OUTPUT_DIRECTORY "${PROJECT_SOURCE_DIR}/lib/"
        LIBRARY_OUTPUT_DIRECTORY "${PROJECT_SOURCE_DIR}/lib/"
        RUNTIME_OUTPUT_DIRECTORY "${PROJECT_SOURCE_DIR}/bin/"
        )

# boost
find_package(Boost REQUIRED COMPONENTS filesystem)
include_directories(${Boost_INCLUDE_DIRS})
target_link_libraries(json Boost::filesystem)

# json cpp
find_package(PkgConfig REQUIRED)
pkg_check_modules(JSONCPP jsoncpp)
link_libraries(${JSONCPP_LIBRARIES})
include_directories("${JSONCPP_INCLUDE_DIRS}")
target_link_libraries(json ${JSONCPP_LIBRARIES})
