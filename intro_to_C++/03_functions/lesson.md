## 1. Functions in C++

In C++, a function must have:

    1.	Return type — what it sends back (int, double, void, etc.)
    2.	Name — follows C++ naming rules (letters, numbers, _, no spaces)
    3.	Parameters — typed variables inside parentheses
    4.	Body — {} containing the code

Example:

```cpp
void greetPlayer(std::string name) {
    std::cout << "Welcome, " << name << "!\n";
}
```

    •	void → no value returned
    •	std::string name → parameter that receives data when called

---

## 2. Pass-by-Value vs Pass-by-Reference

Pass-by-Value
• Makes a copy of the data
• Changes don’t affect the original variable

```cpp
void heal(int health) {
    health += 10; // Only changes the copy
}
```

Pass-by-Reference

    •	Uses & in the parameter
    •	Changes do affect the original variable

```cpp
void heal(int& health) {
    health += 10; // Changes the original
}
```

This is HUGE in games:

    •	Pass-by-reference = when you want to actually change a player’s health, inventory, etc.
    •	Pass-by-value = when you want to simulate or calculate without affecting the real stat

---

## 3. Mini Example

```cpp
#include <iostream>
#include <string>

void healPlayer(int& health, int amount) {
    health += amount;
    if (health > 100) health = 100; // Cap at 100
}

int main() {
    int playerHealth = 50;

    std::cout << "Starting health: " << playerHealth << "\n";
    healPlayer(playerHealth, 25);
    std::cout << "After healing: " << playerHealth << "\n";
}
```

Output:

    Starting health: 50
    After healing: 75

---

## 4. Today’s Challenge

Make a program that:

1. Stores a player’s health and level
2. Has a function levelUp() that:
   • Increases level by 1
   • Fully restores health 3. Has a function takeDamage() that:
   • Lowers health by a set amount
   • Prints "You died!" if health reaches 0 4. Runs a short “game loop” where:
   • Player takes damage twice
   • Player levels up
   • Player takes more damage

⸻

💡 Tip: Keep main() clean — move logic into functions.
This is the same habit Unreal devs use for their .cpp gameplay classes.
