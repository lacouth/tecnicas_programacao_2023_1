cmake_minimum_required(VERSION 3.5)

project(bee_2694_calculadora LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(bee_2694_calculadora main.cpp)

install(TARGETS bee_2694_calculadora
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
