#include "char_creation.h"
#include "player.h"

//Declared sense its in another .cpp file
extern void game_loop(Player& player);

int main() {
    Player player;
    char_creation(player); //pass player struct to char_creation

    game_loop(player);

    return 0;
}