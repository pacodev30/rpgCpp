#include "character.h"
#include "game.h"
#include "mage.h"
#include "warrior.h"
#include "weapon.h"
#include <iostream>

int main()
{
    Game g(3);

    // INIT WEAPONS
    Weapon hammer("Hammer", 30);
    Weapon fireBall("Fireball", 10);

    // INIT GAMERS
    Mage* stella = new Mage("Stella", fireBall);
    Warrior* esteban = new Warrior("Esteban", hammer);
    Mage* merlin = new Mage("Merlin", fireBall, 40);
    Warrior* hulk = new Warrior("Hulk", hammer);

    // GAME
    g.addGamer(stella);
    g.addGamer(esteban);
    g.addGamer(merlin);
    g.addGamer(hulk);

    g.displayGamers();

    stella->attack(esteban, 1);
    esteban->attack(stella, 3);


    // TESTS
    std::cout << "\n-- TESTS --\nConstruct Character : " << Character::getCharacterCounter() << std::endl;
    g.testIsAlive();

    return 0;
}

