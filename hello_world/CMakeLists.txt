cmake_minimum_required(VERSION 3.5)

project(hello_world LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(hello_world main.cpp)

install(TARGETS hello_world
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
