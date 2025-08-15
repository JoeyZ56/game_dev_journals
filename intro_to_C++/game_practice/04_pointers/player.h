#ifndef PLAYER_H
#define PLAYER_H

#include <string>
using namespace std;

struct Player 
{
string name;
int health;
};
// Function takes a *pointer* to Player
void printPlayerInfo(const Player* p);

#endif
