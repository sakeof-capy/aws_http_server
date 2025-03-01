add_executable(http_server bin/main.cpp)
target_link_libraries(http_server httplib::httplib)
