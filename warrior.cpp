#include "warrior.h"
#include <iostream>


Warrior::Warrior(const std::string& name, const Weapon& weapon)
    : Character(name, weapon)
{
}

void Warrior::displayStatus() const
{
    std::cout << _name << " | HP(" << _hp <<  ") | " << "Warrior(" << _weapon.getName() << ")" << std::endl;
}

