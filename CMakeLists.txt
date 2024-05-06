cmake_minimum_required(VERSION 3.27)
project(Smart)

set(CMAKE_CXX_STANDARD 23)

add_executable(Smart main.cpp
        fmgr.hpp
        Brain.hpp
        Brain.cpp
        Data.cpp
        Data.hpp
        Tree/Tree.h
        Tree/Node.h
)
