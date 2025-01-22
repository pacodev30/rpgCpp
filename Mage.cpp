#include "Mage.h"
#include <iostream>

Mage::Mage(const std::string& name, const Weapon& weapon, unsigned int mana)
    : Character(name, weapon), _mana(mana)
{  }

void Mage::displayStatus() const
{
    std::cout << _name << "\t| HP(" << _hp <<  ") \t| Mana(" << _mana << ") \t| Mage(" << _weapon.getName() << ")" << std::endl;
}
