cmake_minimum_required(VERSION 3.0)
project(BattleOfRaces)
set(CMAKE_CXX_FLAGS_DEBUG "-Wall")

set(CMAKE_CXX_FLAGS_RELEASE "-O3")
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_FLAGS -pthread)

if (WITH_TEST)
    add_definitions(-DWITH_TEST)
endif()

add_subdirectory(lib/googletest-master)
include_directories(lib/googletest-master/googletest/include)
include_directories(lib/googletest-master/googlemock/include)

#find_package(GTest REQUIRED)
#include_directories(${gtest_SOURCE_DIR}/include)

include_directories(headers sources)


add_executable(BattleOfRaces main.cpp sources/CBuilding.cpp headers/CBuilding.h headers/CFarm.h sources/CPeasant.cpp
        headers/CPeasant.h headers/CTownHall.h sources/CTownHall.cpp sources/CWarrior.cpp headers/CWarrior.h
        headers/CUnit.h sources/CUnit.cpp sources/CFarm.cpp sources/CBarack.cpp headers/CBarack.h
        headers/CTowerOfWizard.h sources/CTowerOfWizard.cpp headers/CCannonTower.h sources/CCannonTower.cpp
        sources/CInfant.cpp headers/CInfant.h headers/CHorseman.h headers/CFactoryWarrior.h
        headers/CArcher.h sources/CArcher.cpp sources/CHorseman.cpp headers/CWizzard.h
        sources/CWizzard.cpp headers/CCatapult.h sources/CCatapult.cpp headers/CFactoryBuilding.h
        headers/CFactoryTownHall.h headers/CFactoryFarm.h headers/CFactoryBarack.h
        headers/CArcher.h sources/CArcher.cpp sources/CHorseman.cpp headers/CWizzard.h
        sources/CWizzard.cpp headers/CCatapult.h sources/CCatapult.cpp headers/CFactoryBuilding.h
        headers/tests.h headers/CFactoryPeasant.h headers/CFactoryInfant.h
        headers/CFactoryArcher.h headers/CFactoryWizzard.h headers/CFactoryHorseman.h headers/CFactoryCatapult.h
        sources/CFactoryPeasant.cpp sources/CFactoryWizzard.cpp sources/CFactoryInfant.cpp sources/CFactoryArcher.cpp
        sources/CFactoryHorseman.cpp sources/CFactoryCatapult.cpp sources/CFactoryTownHall.cpp sources/CFactoryFarm.cpp
        sources/CFactoryTowerOfWizard.cpp sources/CFactoryBarack.cpp sources/CFactoryCannonTower.cpp headers/CFactoryCannon.h
        headers/CFactoryTowerOfWizard.h )

target_link_libraries(BattleOfRaces gtest gtest_main)