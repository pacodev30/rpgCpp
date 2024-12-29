#include "weapon.h"

Weapon::Weapon(const std::string& name, unsigned int weaponDamage)
    : _name(name), _weaponDamage(weaponDamage)
{  }

std::string Weapon::getName() const
{
    return _name;
}

unsigned int Weapon::getWeaponDamage() const
{
    return _weaponDamage;
}
