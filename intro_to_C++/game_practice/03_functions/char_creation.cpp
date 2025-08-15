#include <iostream>
#include <string>
#include "char_creation.h"

void char_creation(Player& player) {

    std::cout << "Who are you: ";
    std::getline(std::cin, player.name);

    std::cout << "What adventurer class are you? ";
    std::getline(std::cin, player.char_class);

    std::cout << "What level of power does " << player.name << ", possess?\n";
    std::cin >> player.level;

    player.health = 100;

    std::cout << "Hail " << player.name << ",\n " << player.char_class << " of the frontier. Welcome to Abrithia!\n";




}