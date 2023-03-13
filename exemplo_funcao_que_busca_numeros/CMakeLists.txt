cmake_minimum_required(VERSION 3.5)

project(exemplo_funcao_que_busca_numeros LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(exemplo_funcao_que_busca_numeros main.cpp)

install(TARGETS exemplo_funcao_que_busca_numeros
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
