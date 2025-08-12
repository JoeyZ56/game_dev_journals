#include <iostream>
#include <cmath> //to get C++ built in math functions

using namespace std;

int main()
{

    // double result = floor(1.2); round down
    // double result = pow(2,3); 2 to the 3rd power
    // cout << result;


    //exercise: Calculate the area of a circle
    const double pi = 3.14159;
    cout << "What is the radius of the circle: ";
    double radius;
    cin >> radius;

    double formula = pi * pow(radius, 2);

    cout << "The area of a circle with radius " << radius << " is " << formula << "\n"; 

    return 0;
}