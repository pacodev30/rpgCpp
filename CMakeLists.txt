cmake_minimum_required(VERSION 3.16)

project(rpgCpp LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(rpgCpp main.cpp
    weapon.h weapon.cpp
    character.h character.cpp
    mage.h mage.cpp
    warrior.h warrior.cpp
    game.h game.cpp)

include(GNUInstallDirs)
install(TARGETS rpgCpp
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
