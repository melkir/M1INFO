cmake_minimum_required(VERSION 2.8.4)
project(TD12)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

file(GLOB_RECURSE SOURCE_FILES src/*.cpp)
file(GLOB_RECURSE HEADER_FILES header/*.h header/*.tpp)

add_executable(TD12 ${SOURCE_FILES} ${HEADER_FILES})
