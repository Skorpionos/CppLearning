cmake_minimum_required(VERSION 3.8)

project(001)

set(SOURCE_FILES
        main.cpp
        std_lib_facilities.h
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

set(CMAKE_CXX_STANDARD 17)

find_package(Boost COMPONENTS #[[system filesystem log]] program_options REQUIRED)
IF (Boost_FOUND)
#    include_directories(${Boost_INCLUDE_DIR})

    target_link_libraries(001
#            ${Boost_FILESYSTEM_LIBRARY}
#            ${Boost_SYSTEM_LIBRARY}
#            ${Boost_LOG_LIBRARY}
            ${Boost_PROGRAM_OPTIONS_LIBRARY}
            )
endif ()

#message(${Boost_INCLUDE_DIR})
#message(${Boost_FILESYSTEM_LIBRARY})
#message(${Boost_SYSTEM_LIBRARY})
#message(${Boost_LOG_LIBRARY})
message(${Boost_PROGRAM_OPTIONS_LIBRARY})



