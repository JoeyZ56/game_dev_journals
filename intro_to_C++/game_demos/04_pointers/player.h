// The data (your struct) and the function declarations for basic player behaviors.

#ifndef PLAYER_H
#define PLAYER_H

#include <string>

// Data
struct Player
{
    std::string name;
    std::string char_class;
    int level;
    int health;
    int stamina;
    int potions;
    int maxHealth;
    int maxStamina;
};

// Function declarations
void initPlayer(Player &p, const std::string &name, std::string &char_name, int level, int maxHealth, int maxStamina, int potions);
void clampStats(Player &p);       // Keeps health/stam within [0,max]
bool isAlive(const Player &p);    // true if health is > 0
void levelUp(Player &p);          // +1 level
void printStats(const Player &p); // for debugging

#endif