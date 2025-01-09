#include "ManagerGame.h"
#include "weapon.h"

int main()
{
    ManagerGame m;

    // INIT WEAPONS
    Weapon hammer("Hammer", 40);
    Weapon saber("Saber", 30);
    Weapon fireBall("Fireball", 20);

    // GAME
    m.addWarrior("Esteban", saber);
    m.addWarrior("Hulk", hammer);
    m.addMage("Stella", fireBall, 40);

    m.displayGamers();
    m.findGamer("Hulk")->attack(m.findGamer("Stella"));
    m.findGamer("Esteban")->attack(m.findGamer("Hulk"), 4);

    m.testIsAlive();

    return 0;
}

