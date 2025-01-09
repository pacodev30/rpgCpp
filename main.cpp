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

/*
Welcome to Esteban, a valiant warrior :)
Welcome to Hulk, a valiant warrior :)
Welcome to Stella a wise mage ;)

--- GAMERS ---
Esteban| HP(100) | Warrior(Saber)
Hulk| HP(100) | Warrior(Hammer)
Stella| HP(100) | Mana(40) | Mage(Fireball)
-------------

-> Hulk attack Stella
Stella(60)
-> Esteban attack Hulk
Hulk(70)
-> Esteban attack Hulk
Hulk(40)
-> Esteban attack Hulk
Hulk(10)
-> Esteban attack Hulk
Hulk(0)

Hulk is dead :(
 -- End of the game ---

<- Destruct Esteban
<- Destruct Hulk
<- Destruct Stella

Le processus s'est terminé avec le code : 0.
*/
