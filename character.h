#pragma once
#include "weapon.h"
#include <string>

class Character {
public:
    Character(const std::string& name, const Weapon& weapon);
    virtual ~Character();

    virtual std::string getName() const;
    virtual bool isAlive() const;
    virtual void displayStatus() const = 0;

    virtual void getDamage(int damage);
    virtual void attack(Character* target, int numberOfAttack);
    static int getCharacterCounter();

protected:
    std::string _name;
    unsigned int _hp;
    Weapon _weapon;
    static unsigned int _characterCounter;
};
