cmake_minimum_required(VERSION 2.8.4)
project(TD3)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

file(GLOB_RECURSE SOURCE_FILES src/*.cpp)
file(GLOB_RECURSE HEADER_FILES header/*.h)

add_executable(TD3 ${SOURCE_FILES} ${HEADER_FILES})