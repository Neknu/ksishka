cmake_minimum_required(VERSION 3.15)
project(inheritance)

set(CMAKE_CXX_STANDARD 14)

add_executable(inheritance main.cpp List.h ArrayList.cpp ArrayList.h NodeList.cpp NodeList.h)