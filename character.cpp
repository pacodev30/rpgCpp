#include "Character.h"
#include "weapon.h"
#include <iostream>
unsigned int Character::_characterCounter = 0;

Character::Character(const std::string& name, const Weapon& weapon)
    : _name(name), _hp(100), _weapon(weapon)
{
    _characterCounter++;
}

Character::~Character()
{  }

std::string Character::getName() const
{
    return _name;
}

bool Character::isAlive() const
{
    return _hp > 0;
}

void Character::getDamage(int damage)
{
    if(damage < _hp)
        _hp -= damage;
    else
        _hp =  0;
}

void Character::attack(Character* target, int numberOfAttack)
{
    for(int i = 0; i < numberOfAttack; i++)
    {
        if (target->isAlive())
        {
            target->getDamage(_weapon.getWeaponDamage());
            std::cout << "-> " << _name << " attack " << target->getName() << std::endl;
            target->displayStatus();
        }
    }
}

int Character::getCharacterCounter()
{
    return _characterCounter;
}
