#include "combat.h"
#include <algorithm>

int calculateDamage(int attack, int defense)
{
int raw = attack - defense; // sets the variable raw to equal attack - the defense.

return std::max(0, raw); // returns raw
}

int calculateDamage(const Player& attacker, const Player& defender)
{
    return calculateDamage(attacker.attack, defender.defense);
}