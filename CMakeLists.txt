cmake_minimum_required(VERSION 2.6)
project (Adventure)
include_directories("inc")
add_subdirectory("src")

set(libs objs)

add_executable(game src/game.cpp)
target_link_libraries(game ${libs})