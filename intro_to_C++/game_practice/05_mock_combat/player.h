//Include guards
#ifndef PLAYER_H //(if not defined) used to prevent multiple inclusions of the same header file within a single compilation unit.e
#define PLAYER_H

#include <string>
#include <vector> // a dynamic array that can grow or shrink at runtime.

using namespace std; //it’s generally not best practice to use using namespace std; — it can cause name collisions in larger projects. 

struct Player //player object with preset data
{
string name;
int level{1};
int health{100};
int maxHealth{100};
int attack{10};
int defense{5};
vector<string>inventory; // dynamic array

};

//Function Declarations
void takeDamage(Player& p, int amount);
void heal(Player& p, int amount);
void addItem(Player& p, int amount);

//guard
#endif