#pragma once
#include <string>

class Weapon
{
public:
    Weapon(const std::string& name, unsigned int weaponDamage);

    std::string getName() const;
    unsigned int getWeaponDamage() const;

private:
    std::string _name;
    unsigned int _weaponDamage;
};
