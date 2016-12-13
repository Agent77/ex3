cmake_minimum_required(VERSION 3.6)
project(ex3)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp BFS.cpp Graph.cpp Grid.cpp Point.cpp Taxi.cpp Coordinate.cpp Driver.cpp Node.cpp Passenger.cpp Trip.cpp)
add_executable(ex3 ${SOURCE_FILES})