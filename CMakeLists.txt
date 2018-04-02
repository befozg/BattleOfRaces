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

file(GLOB SRC_FILES sources/*.cpp)
file(GLOB HDR_FILES headers/*.h)

add_executable(BattleOfRaces main.cpp ${SRC_FILES} ${HDR_FILES})

target_link_libraries(BattleOfRaces gtest gtest_main)