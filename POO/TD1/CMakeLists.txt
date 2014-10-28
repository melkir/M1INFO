cmake_minimum_required(VERSION 2.8.4)
project(TD1)

file(GLOB_RECURSE SOURCE_FILES src/*.cpp)
file(GLOB_RECURSE HEADER_FILES header/*.h)
add_executable(TD1 ${SOURCE_FILES} ${HEADER_FILES})
