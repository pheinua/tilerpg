cmake_minimum_required(VERSION 3.14)
project(TileRPG)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14")

file(GLOB SRC_FOLDER "src/*.cpp")

set(SOURCE_FILES main.cpp ${SRC_FOLDER})

add_executable(TileRPG ${SOURCE_FILES} ${SRC_FOLDER})
include_directories(/usr/local/include include)

find_package(SFML 2.5 COMPONENTS system window graphics network audio REQUIRED)
include_directories(${SFML_INCLUDE_DIRS})
target_link_libraries(TileRPG sfml-system sfml-window sfml-graphics sfml-audio sfml-network)
