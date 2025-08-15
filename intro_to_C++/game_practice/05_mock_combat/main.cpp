#include <iostream>
#include "player.h"
#include "combat.h"

int main()
{
    Player hero{ "Halevar", 1, 100, 100, 15, 4};
    Player goblin{"Steve", 1, 40, 40, 8, 2};

    std::cout << "A wild " << goblin.name << "Appears!\n";

    //Hero attack
    int dmg = calculateDamage(hero, goblin);
    takeDamage(goblin, dmg);

    std::cout << hero.name << " hits " << goblin.name << " for " << dmg << " damage. " <<
    goblin.name << " HP " << goblin.health << "/" << goblin.maxHealth << "\n";

    //Goblin attacks
    std::cout << goblin.name << " hits " << hero.name << " for " << dmg << " damage." <<
    hero.name << " HP " << hero.health << "/" << hero.maxHealth << "\n";

    return 0;
}