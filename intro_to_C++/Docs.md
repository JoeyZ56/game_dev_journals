## C++ Docs

[C++ Docs](https://en.cppreference.com/)

### Data Types:

#### 🟢 int → Integer

    •	Stands for “integer”
    •	Whole numbers (no decimal)
    •	Example: -3, 0, 42, 1000

```cpp
int score = 10;
```

    •	Use when you’re counting things, tracking levels, health, etc.

#### 🔵 double → Decimal (Floating-point Number)

    •	Stands for “double-precision float”
    •	Can store numbers with decimal points
    •	Example: 3.14, -7.25, 0.0001

```cpp
double accuracy = 92.5;
```

    •	Use when precision matters — like damage calculations, physics, or percentages

#### ⚪ void → No Value

    •	Means “this function doesn’t return anything”
    •	You use void when a function just does something but doesn’t give you back a result

Example:

```cpp
void greet() {
    std::cout << "Hello, player!\n";
}
```

Compared to:

```cpp
int getHealth() {
    return 100;
}
```

    •	getHealth() gives back an int
    •	greet() gives back nothing, just prints text

---
