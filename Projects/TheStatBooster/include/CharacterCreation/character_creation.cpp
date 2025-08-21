#include <iostream>
#include "character_creation.h"
#include <string>
#include <vector>

void CreateCharacter()
{
    // Starting choices
    std::string name;
    std::vector<std::string> classChoice = {"warrior", "archer", "mage"};
    std::vector<std::string> weaponChoice = {"sword", "bow", "staff"};
    std::vector<std::string> elementChoice = {"none", "fire", "water", "Wind", "earth"};

    // starting stats
    int health;

    // current player picks
    std::string classPick;
    std::string weaponPick;
    std::string elementPick;

    //Level starting value
    int level = 0;

    // player interaction with console
    std::cout << "Who are you?\n";
    std::getline(std::cin, name);

    // Class Choice
    for (const auto &option : classChoice)
    {
        std::cout << "- " << option << "\n";
    }
    std::getline(std::cin, classPick);

    // Weapon Choice
    for (const auto &option : weaponChoice) // create a loop to show each array option in the console
    {
        std::cout << "- " << option << "\n";
    }
    std::getline(std::cin, weaponPick);

    // Element Choice
    for (const auto &option : elementChoice)
    {
        std::cout << "- " << option << "\n";
    }
    std::getline(std::cin, elementPick);


    // Changes health based on class pick
    if (classPick == "warrior")
    {
        health = 200;
    }
    else
    {
        health = 100;
    }

    //adjust stats and level based on weapon choice
    if (weaponPick == "sword"){
        level += 5;
    } else if (weaponPick == "mage"){
        level += 3;
    } else {
        level = 2;
    }

    //weapon Damage
    int swordDamage = 15;
    int bowDamage = 20;
    int staffDamage = 30;

    //Element Damage
    int fireDamage = 30;
    int waterDamage = 15;
    int earthDamage = 20;
    int windDamage = 25;

    int powerLevel;

    if (weaponPick == "sword" && elementPick == "fire") {
        powerLevel = swordDamage + fireDamage;
    } else if (weaponPick == "sword" && elementPick == "water"){
        powerLevel = swordDamage + waterDamage;
    } else if (weaponPick == "sword" && elementPick == "earth"){
        powerLevel = swordDamage + earthDamage;
    } else if (weaponPick == "sword" && elementPick == "wind"){
        powerLevel = swordDamage + windDamage;
    } else if (weaponPick == "bow" && elementPick == "fire"){
        powerLevel = bowDamage + fireDamage;
    } else if (weaponPick == "bow" && elementPick == "water"){
        powerLevel = bowDamage + waterDamage;
    } else if (weaponPick == "bow" && elementPick == "earth"){
        powerLevel = bowDamage + earthDamage;
    } else if (weaponPick == "bow" && elementPick == "wind"){
        powerLevel = bowDamage + windDamage;
    } else if (weaponPick == "staff" && elementPick == "fire"){
        powerLevel = staffDamage + fireDamage;
    } else if (weaponPick == "staff" && elementPick == "water"){
        powerLevel = staffDamage + waterDamage;
    } else if (weaponPick == "staff" && elementPick == "earth"){
        powerLevel = staffDamage + earthDamage;
    } else if (weaponPick == "staff" && elementPick == "wind"){
        powerLevel = staffDamage + windDamage;
    } else if (elementPick == "none") {
    if (weaponPick == "sword") powerLevel = swordDamage;
    else if (weaponPick == "bow") powerLevel = bowDamage;
    else if (weaponPick == "staff") powerLevel = staffDamage;
}
    

    
    // introduction
    std::cout << "Welcome " << name << ". Brave " << classPick << ". With your " << weaponPick << ", wielding the power of " << elementPick << ".\n" << " You venture forth with a staggering power of " << powerLevel << ". May the gods bless you.\n";
}