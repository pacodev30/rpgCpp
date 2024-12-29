#pragma once
#include "character.h"

class Game
{
public:
    Game(unsigned int arrayCapacity);
    ~Game();

    void displayGamers() const;

    void addGamer(Character* gamer);
    void testIsAlive();

private:
    Character** _gamers;
    unsigned int _arrayCapacity;
    unsigned int _indexGamer;
    bool _endGame;
};
