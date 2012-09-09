file(GLOB objs obj/*.cpp)
file(GLOB ctrls ctrl/*.cpp)

add_library(engine ${objs} ${ctrls} exception.cpp)
