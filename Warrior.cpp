#include "Warrior.h"
#include <iostream>


Warrior::Warrior(const std::string& name, const Weapon& weapon)
    : Character(name, weapon)
{
}

void Warrior::displayStatus() const
{
    std::cout << _name << "\t| HP(" << _hp <<  ") \t| " << "Warrior(" << _weapon.getName() << ")" << std::endl;
}

