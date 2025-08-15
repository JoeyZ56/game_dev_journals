#include <iostream>
#include <string>
#include "char_level.h"

void char_level(){
    std::string name;
    int level;
    
    std::cout << "Enter character name here: ";
    std::getline(std::cin, name);
    
    std::cout << "Enter character starting level: ";
    std::cin >> level;
    
    std::cout << "Welcome " << name << ", to the world of Neivarra! Your starting level is: " << level << ", quest to grow stronger and take on the challanging demon lord!\n";
}
