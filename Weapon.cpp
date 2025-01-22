#include "Weapon.h"
#include <string>

Weapon::Weapon(const WeaponName& name, unsigned int weaponDamage)
    : _name(name), _weaponDamage(weaponDamage)
{  }

std::string Weapon::getName() const
{
    switch (_name) {
    case WeaponName::SABER:
        return "Saber";
        break;

    case WeaponName::HAMMER:
        return "Saber";
        break;

    default:
        return "Fireball";
        break;
    }
}

unsigned int Weapon::getWeaponDamage() const
{
    return _weaponDamage;
}
