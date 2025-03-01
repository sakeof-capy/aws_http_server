cmake_minimum_required(VERSION 3.5)
project(http_server)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_subdirectory(0_root)
add_subdirectory(tests)

add_subdirectory(dependencies/cpp-httplib)
