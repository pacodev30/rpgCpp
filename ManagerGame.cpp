#include "ManagerGame.h"
#include "character.h"
#include "warrior.h"
#include "mage.h"
#include <iostream>

ManagerGame::ManagerGame()
    : _endGame(false)
{}

ManagerGame::~ManagerGame()
{
    for(Character* gamer : _gamers) {
        delete gamer;
        gamer = nullptr;
    }
}

bool ManagerGame::getEndGame()
{
    return _endGame;
}

void ManagerGame::displayGamers() const
{
    std::cout << "\n--- GAMERS ---" << std::endl;
    for (Character* gamer : _gamers) {
        gamer->displayStatus();
    }
    std::cout << "-------------\n" << std::endl;
}

void ManagerGame::addWarrior(std::string name, Weapon& weapon)
{
    Warrior* w = new Warrior(name, weapon);
    _gamers.push_back(w);
    std::cout << "Welcome to " << w->getName() << ", a valiant warrior :)" << std::endl;
}

void ManagerGame::addMage(std::string name, Weapon &weapon, int mana)
{
    Mage* m= new Mage(name, weapon, mana);
    _gamers.push_back(m);
    std::cout << "Welcome to " << m->getName() << " a wise mage ;)" << std::endl;
}

Character* ManagerGame::findGamer(std::string name)
{
    Character* founded;
    for(Character* g : _gamers)
    {
        if(g->getName() == name) {
            founded = g;
        }
    }
    return founded;
}

void ManagerGame::testIsAlive()
{
    for(Character* g : _gamers)
    {
        if(g->getHp() <= 0)
        {
            std::cout  << "\n" << g->getName() << " is dead :( \n -- End of the game ---\n" << std::endl;
        }
    }
}
