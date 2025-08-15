#include "player.h"

void game_loop(Player& player) {
    //First Attack
    takeDamage(player, 30);

    //Second Attack
    takeDamage(player, 40);

    // Level Up
    levelUp(player);

    //Final Attack
    takeDamage(player, 80);
}