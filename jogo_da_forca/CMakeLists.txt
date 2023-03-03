cmake_minimum_required(VERSION 3.5)

project(jogo_da_forca LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(jogo_da_forca main.cpp)

install(TARGETS jogo_da_forca
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
