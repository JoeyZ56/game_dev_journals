#include <iostream>
#include "player.h"

void initPlayer(Player& p)
{
    std::cout << "You are " << p.name << ". A robust " << p.char_class << ".\n"
              << "starting stats are:\n"
              << "Health: " << p.health << "\n"
              << "Stamina: " << p.stamina;
}

