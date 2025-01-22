cmake_minimum_required(VERSION 3.16)

project(rpgCpp LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(rpgCpp main.cpp
    Weapon.h Weapon.cpp
    Character.h Character.cpp
    Mage.h Mage.cpp
    Warrior.h Warrior.cpp

    ManagerGame.h ManagerGame.cpp)

include(GNUInstallDirs)
install(TARGETS rpgCpp
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
