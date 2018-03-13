cmake_minimum_required(VERSION 3.9)
project(BattleOfRaces)

set(CMAKE_CXX_STANDARD 11)

include_directories(headers sources)

add_executable(BattleOfRaces main.cpp sources/CBuilding.cpp headers/CBuilding.h headers/CFarm.h sources/CPeasant.cpp
        headers/CPeasant.h headers/CTownHall.h sources/CTownHall.cpp sources/CWarrior.cpp headers/CWarrior.h
        headers/IUnit.h sources/IUnit.cpp sources/CFarm.cpp sources/CBarack.cpp headers/CBarack.h
        headers/CTowerOfWizard.h sources/CTowerOfWizard.cpp headers/CCannonTower.h sources/CCannonTower.cpp
        headers/CHumanTownHall.h sources/CHumanTownHall.cpp sources/COrcTownHall.cpp headers/COrcTownHall.h
        sources/CElfTownHall.cpp headers/CElfTownHall.h sources/CInfant.cpp headers/CInfant.h headers/CHorseman.h headers/CFactoryWarrior.h
        sources/CFactoryWarrior.cpp headers/CArcher.h sources/CArcher.cpp sources/CHorseman.cpp headers/CWizzard.h
        sources/CWizzard.cpp headers/CCatapult.h sources/CCatapult.cpp sources/CFactoryWarrior.cpp headers/CFactoryBuilding.h
        sources/CFactoryBuilding.cpp)
