#pragma once
#include "weapon.h"
#include <string>

class Character {
public:
    Character(const std::string& name, const Weapon& weapon);
    virtual ~Character();

    std::string getName() const;
    int getHp() const;

    bool isAlive() const;
    virtual void displayStatus() const = 0;

    void takeDamage(int damage);
    virtual void attack(Character *target, int numberOfAttack = 1);

protected:
    std::string _name;
    unsigned int _hp;
    Weapon _weapon;  
};
