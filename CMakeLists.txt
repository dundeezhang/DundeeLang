cmake_minimum_required(VERSION 3.24)
project(DundeeLang)

set(CMAKE_CXX_STANDARD 20)

add_executable(DundeeLang main.cpp Libraries/Math.cpp Libraries/Math.h includes.h Interpreter/Run.cpp Interpreter/Run.h Interpreter/Loops.cpp Interpreter/Loops.h Interpreter/Read.cpp Interpreter/Read.h Interpreter/DataTypes.cpp Interpreter/DataTypes.h)
