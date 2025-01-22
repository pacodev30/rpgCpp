#include "Character.h"
#include "Character.h"
#include "Weapon.h"
#include <iostream>

Character::Character(const std::string& name, const Weapon& weapon)
    : _name(name), _hp(100), _weapon(weapon)
{ }

Character::~Character()
{
    std::cout << "<- Destruct " << _name << std::endl;
}

std::string Character::getName() const
{
    return _name;
}

int Character::getHp() const
{
    return _hp;
}

bool Character::isAlive() const
{
    return _hp > 0;
}

void Character::takeDamage(int damage)
{
    if(damage < _hp)
        _hp -= damage;
    else
        _hp =  0;
}

void Character::attack(Character *target, int numberOfAttack)
{
    for(int i = 0; i < numberOfAttack; i++)
    {
        if (target->isAlive())
        {
            target->takeDamage(_weapon.getWeaponDamage());
            std::cout << "-> " << _name << " attack " << target->getName() << std::endl;
            std::cout << target->_name + "(" << target->_hp << ")" << std::endl;
        }
    }
}
