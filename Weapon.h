#pragma once
#include <string>


enum WeaponName
{
    SABER,
    HAMMER,
    FIREBALL,
    KNIFE
};

class Weapon
{
public:
    Weapon(const WeaponName& name, const unsigned int weaponDamage);

    std::string getName() const;
    unsigned int getWeaponDamage() const;

private:
    WeaponName _name;
    unsigned int _weaponDamage;
};

