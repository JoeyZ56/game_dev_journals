#include "player.h"

int main() 
{
    Player hero{"Halevar", 100};

    //create a pointer to hero
    Player* ptr = &hero;

    //Access via pointer directly
    ptr->health -= 20; //take 20 damage

    // Pass pointer to function
    printPlayerInfo(ptr);

    return 0; //end program
}