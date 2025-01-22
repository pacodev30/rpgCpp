#pragma once
#include "Character.h"

class Mage : public Character
{
public:
    Mage(const std::string& name, const Weapon& weapon, unsigned int mana = 20);

    void displayStatus() const override;

private:
    unsigned int _mana;
};
