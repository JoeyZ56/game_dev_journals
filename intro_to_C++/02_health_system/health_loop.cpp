// health_loop.cpp
#include <iostream>
#include "health_loop.h"

void health_loop() {
    int health = 100;

    while (health > 0) {
        std::cout << "Current health: " << health << "\n";
        health -= 20;

        if (health <= 0) {
            std::cout << "You Died!\n";
        }
    }
}
