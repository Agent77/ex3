cmake_minimum_required(VERSION 3.6)
project(ex3)
set(CMAKE_CXX_STANDARD 11)
include_directories("/Users/Tiki/Downloads/boost_1_62_0")

set(BOOST_ROOT "/Users/Tiki/Downloads/boost_1_62_0")
set(Boost_Path "/Users/Tiki/Downloads/boost_1_62_0")

set(Boost_INCLUDE_DIR "${Boost_Path}/boost_1_62_0")

set(SOURCE_FILES main.cpp BFS.cpp Graph.cpp Grid.cpp GameFlow.cpp TaxiCenter.cpp Point.cpp Taxi.cpp Coordinate.cpp Driver.cpp Node.cpp Passenger.cpp Trip.cpp)
add_executable(ex3 ${SOURCE_FILES})