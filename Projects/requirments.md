## Requirements:

1. Ask the player to input:

   • Character name (string)
   • Level (int)
   • Weapon power (int)
   • Bonus type (string) — options: "none", "fire", "ice", "shadow"

2. Use a function to calculate total attack power using this formula:

```cpp
base attack = level × weapon power
bonus multiplier:
  none    = 1.0
  fire    = 1.2
  ice     = 1.3
  shadow  = 1.5
total attack = base attack × bonus multiplier
```

3. Output message:

```cpp
Warrior Halevar at level 5 wields a weapon with base power 20.
Final attack power with fire bonus: 120
```

Optional Add-ons (for stretch practice):

    •	Use a switch or if/else structure for selecting the multiplier
    •	Validate the user’s input for bonus type (ask again if not valid)
    •	Create a loop to let the user try again with a different character
