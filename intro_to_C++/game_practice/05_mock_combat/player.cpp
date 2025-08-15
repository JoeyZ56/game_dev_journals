#include "player.h"
#include <algorithm> //designed to be generic and work with various container types (like std::vector, std::list, std::array, etc.) 

using namespace std;

void takeDamage(Player& p, int amount) 
{
    // max() is a header that returns the larger of two or more given values.
    p.health = max(0, p.health - max(0, amount)); //updates players health to the new value each time it changes.
}

void heal(Player& p, int amount)
{
    //min() is to determine the smaller of two given values or the smallest value within a range or initializer lis
    p.health = min(p.maxHealth, p.health  + max(0, amount)); //take the players current health and heal it at a given amount up to maxHealth.
}

void addItems(Player& p, const string& item)
{
    //push_back() to add a new element to the end of the container. 
    p.inventory.push_back(item); //add item to the end of the container (array)
}