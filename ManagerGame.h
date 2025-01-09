#pragma once
#include "character.h"
#include "weapon.h"
#include <vector>

class ManagerGame
{
public:
    ManagerGame();
    ~ManagerGame();

    bool getEndGame();
    void displayGamers() const;

    void addWarrior(std::string name, Weapon& weapon);
    void addMage(std::string name, Weapon& weapon, int mana = 20);

    Character* findGamer(std::string name);

    void testIsAlive();

private:
    std::vector<Character*> _gamers;
    bool _endGame;
};
