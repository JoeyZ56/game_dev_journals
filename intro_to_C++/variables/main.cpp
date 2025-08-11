#include <iostream> //get standard library

int main()
{ // starting point of program
    // initialing a variable
    // int file_size = 0; //variable with a number data
    // int counter = 0;
    // double sales = 9.99; // fraction

    //std::cout << file_size;

    //swap the values of a & b
    int a = 2;
    int b = 4;
    int c = a; //create a 3rd variable to help transfer the data

    a = b;
    b = c;

    
    std::cout << "a: " << a << "\n" << "b: " << b;


    return 0; // end program
}