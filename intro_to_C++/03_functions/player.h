#ifndef PLAYER_H
#define PLAYER_H

#include <string>

struct Player { //Player object
    std::string name;
    std::string char_class;
    int level;
    int health;
};

void levelUp(Player& player);
void takeDamage(Player& player, int damage);

#endif