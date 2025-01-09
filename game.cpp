#include "game.h"
#include "character.h"
#include <cstddef>
#include <iostream>

Game::Game(unsigned int arrayCapacity)
    : _arrayCapacity(arrayCapacity), _indexGamer(0), _endGame(false)
{
    _gamers = new Character*[_arrayCapacity];
}

Game::~Game()
{
    std::cout << "---" << std::endl;
    for (int i = 0; i < _arrayCapacity; i++)
    {
        delete _gamers[i];
        _gamers[i] = nullptr;
    }
    delete[] _gamers;
}

void Game::displayGamers() const
{
    std::cout << "\n-- GAMERS --" << std::endl;
    for (int i = 0; i < _indexGamer; i++)
    {
        _gamers[i]->displayStatus();
    }
    std::cout << "---\n" << std::endl;
}

void Game::addGamer(Character* gamer)
{
    if (_indexGamer < _arrayCapacity)
    {
        _gamers[_indexGamer++] = gamer;
        std::cout << gamer->getName() << " is added succesfully" << std::endl;
    }
    else
    {
        _arrayCapacity++;
        _gamers[_indexGamer++] = gamer;
        std::cout << gamer->getName() << " is added succesfully, the new capacity of gamers is " << _arrayCapacity << std::endl;
    }
}

void Game::testIsAlive()
{
    for(int i = 0; i < _arrayCapacity; i++)
    {
        if(!_gamers[i]->isAlive())
        {
            _endGame = true;
            std::cout << "A character is dead :(" << std::endl;
        }
        if(!_endGame)
            std::cout << "All characters are alive :)" << std::endl;
    }
}
