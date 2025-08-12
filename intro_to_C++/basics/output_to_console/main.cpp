#include <iostream>

// use this to declare std globally
using namespace std;

int main()
{

    // int x = 10;
    // int y = 20;

    // cout << "x = " << x << endl
    //      << "y = " << y;

    // exercise
    // int income = 95000;
    // const double state_tax = 0.04;
    // const double county_tax = 0.02;

    // double tax = (income * state_tax) + (income * county_tax);
    // double after_tax_income = income - tax;

    // cout << "Your income is: " << income << "\n"
    //      << "State tax rate is: " << state_tax << "\n"
    //      << "County tax rate is: " << county_tax << "\n"
    //      << "Your tax due is: $" << tax << "\n"
    //      << "Your after tax income is: $" << after_tax_income;

    //Output:
    // Your income is: 95000
    // State tax rate is: 0.04
    // County tax rate is: 0.02
    // Your tax due is: $5700
    // Your after tax income is: $89300

// cin (standard input stream)

//exercise
cout << "Enter a temp (in Fahrenheit): ";
double value;
cin >> value;
double formula = (value - 32) * (5.0 / 9.0);

cout << "Thats " << formula << " in Celsius\n";

    return 0;
}