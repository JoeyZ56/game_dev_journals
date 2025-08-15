#include <iostream>
#include "player.h"

using namespace std;

void printPlayerInfo(const Player* p) 
{
    // Use arrow operator because p is a pointer
    cout << "Name: " << p->name << "\n";
    cout << "Health: " << p->health << "\n";
}