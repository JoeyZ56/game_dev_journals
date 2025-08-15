#ifndef COMBAT_H
#define COMBAT_H

#include "player.h"

// Basic formula: max(0, attack - defense)
int calculateDamage(int attack, int defense);

// Overload: derive from player stats
int calculateDamage(const Player& attacker, Player& defender);

#endif