#pragma once
#include "character.h"

class Warrior : public Character
{
public:
    Warrior(const std::string& name, const Weapon& weapon);

    virtual void displayStatus() const override;
};
