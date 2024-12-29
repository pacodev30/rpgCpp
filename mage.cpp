#include "mage.h"
#include <iostream>

Mage::Mage(const std::string& name, const Weapon& weapon, unsigned int mana)
    : Character(name, weapon), _mana(mana)
{  }

void Mage::displayStatus() const
{
    std::cout << _name << " | HP(" << _hp <<  ") | Mana(" << _mana << ") | Mage(" << _weapon.getName() << ")" << std::endl;
}
