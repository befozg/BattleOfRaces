cmake_minimum_required(VERSION 3.0)
project(BattleOfRaces)

set(CMAKE_CXX_STANDARD 11)

add_executable(BattleOfRaces main.cpp CBuilding.cpp CBuilding.h CTownHall.cpp CTownHall.h IUnit.cpp IUnit.h Farm.h cmake-build-debug/CFarm.cpp)