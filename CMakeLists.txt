cmake_minimum_required(VERSION 3.29)
project(Pig_Dice_4_0)

set(CMAKE_CXX_STANDARD 20)

add_executable(Pig_Dice_4_0 main.cpp
        pgame.h
        Turn.h
        Turn.cpp
        Die.h
        Die.cpp)
