cmake_minimum_required(VERSION 2.6)
project (Adventure)
set(CMAKE_BUILD_TYPE Debug)
include_directories("inc")
add_subdirectory("src")

set(libs engine)

add_executable(game src/game.cpp)
target_link_libraries(game ${libs})
