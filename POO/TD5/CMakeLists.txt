cmake_minimum_required(VERSION 2.8.4)
project(TD5)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

find_package(OpenCV REQUIRED)

add_executable(TD5 src/CannyDetector.cpp)
target_link_libraries(TD5 ${OpenCV_LIBS})
