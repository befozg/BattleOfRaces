cmake_minimum_required(VERSION 3.9)
project(BattleOfRaces1)

set(CMAKE_CXX_STANDARD 11)

add_executable(BattleOfRaces1 main.cpp sources/CBuilding.cpp headers/CBuilding.h headers/CFarm.h sources/CHumanPeasant.cpp headers/CHumanPeasant.h sources/CPeasant.cpp headers/CPeasant.h headers/CTownHall.h sources/CTownHall.cpp sources/CWarrior.cpp headers/CWarrior.h
        headers/IUnit.h sources/IUnit.cpp sources/CFarm.cpp sources/CBarack.cpp headers/CBarack.h headers/CTowerOfWizard.h sources/CTowerOfWizard.cpp headers/CCannonTower.h sources/CCannonTower.cpp sources/CElfPeasant.cpp
        headers/CElfPeasant.h sources/COrcPeasant.cpp headers/COrcPeasant.h headers/CHumanTownHall.h sources/CHumanTownHall.cpp sources/COrcTownHall.cpp headers/COrcTownHall.h sources/CElfTownHall.cpp
        headers/CElfTownHall.h sources/CInfant.cpp headers/CInfant.h sources/CHumanInfant.cpp headers/CHumanInfant.h)