project(JapprendsLeCpp CXX)
cmake_minimum_required(VERSION 3.22.3)

set(FILES main.cpp include/Table.cpp include/Table.h)

add_executable(${CMAKE_PROJECT_NAME} ${FILES})

include_directories(include)