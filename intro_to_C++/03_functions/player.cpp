#include <iostream>
#include "player.h"

void levelUp(Player& player) {
    player.level += 1;
    player.health = 100;
    std::cout << player.name << "leveled up to level " << player.level << "!\n";
    std::cout << "Health fully restored!\n";
}

void takeDamage(Player& player, int damage) {
    player.health -= damage;
    std::cout << player.name << " took " << damage << " damage! Health is now " << player.health << ".\n";

    if (player.health <= 0) {
        std::cout << "You died!\n";
    }
}