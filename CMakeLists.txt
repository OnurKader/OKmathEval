cmake_minimum_required(VERSION 2.8)

project(MathEval)
set(CMAKE_CXX_STANDARD 20)
add_library(Token Token.hpp Token.cpp)
add_library(Lexer Lexer.hpp Lexer.cpp)
add_executable(${PROJECT_NAME} "test.cpp")
target_link_libraries(${PROJECT_NAME} PUBLIC Token Lexer)
