# project(algorithm)

set(SOURCE_FILES main.cpp)
# set(OPENSSL_ROOT_DIR /usr/local/opt/openssl)

add_executable(algorithm ${SOURCE_FILES})

find_package(OpenSSL REQUIRED)

target_link_libraries(algorithm PUBLIC OpenSSL::SSL OpenSSL::Crypto)
message("OpenSSL ${OpenSSL_VERSION} linked")

set_target_properties(algorithm PROPERTIES
        ARCHIVE_OUTPUT_DIRECTORY "${PROJECT_SOURCE_DIR}/lib/"
        LIBRARY_OUTPUT_DIRECTORY "${PROJECT_SOURCE_DIR}/lib/"
        RUNTIME_OUTPUT_DIRECTORY "${PROJECT_SOURCE_DIR}/bin/"
        )