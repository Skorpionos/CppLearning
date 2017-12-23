cmake_minimum_required(VERSION 3.8)
project(001)

set(CMAKE_CXX_STANDARD 14)

set(SOURCE_FILES
        main.cpp
        Test.h
        Test.cpp
        Players/Player.cpp
        Players/Player.h
        Players/FieldPlayer.cpp
        Players/FieldPlayer.h
        Players/Goalkeeper.cpp
        Players/Goalkeeper.h
        Factories/PlayerFactory.cpp
        Factories/PlayerFactory.h
        Factories/FieldplayerFactory.cpp
        Factories/FieldplayerFactory.h
        Factories/GoalkeeperFactory.cpp
        Factories/GoalkeeperFactory.h
        Players/Team.h
        Players/Team.cpp
        Players/PersonNames.h
        )
add_executable(001 ${SOURCE_FILES})