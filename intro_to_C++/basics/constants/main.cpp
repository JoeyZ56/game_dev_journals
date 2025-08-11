#include <iostream>

int main()
{

    // create a decimal variable
    // const keeps the variable from changing
    const double pi = 3.14;

    //pi = 22; an error will accrue: 
    //(cannot assign to variable 'pi' with const-qualified)
    //because we protect the original variable with const so it cant be changed.
    std::cout << pi;

    return 0;
}