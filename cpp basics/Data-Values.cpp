#include <iostream>

int main()
{
    // Literals

    std::cout << 5;
    std::cout << 5.4;
    std::cout << 'H'; // single quotes for single character 
    std::cout << "Hello World"; // double quotes for 0 or more charcs

    // Varialbles (objects that have names)

    /* Objects are regions of storage  that can store
    a data value. Variables are objects*/

    int x;

    int a,b; // has to be same type 
    
    // Assignment

    a = 8;
    b = 7;

    std::cout << a;
    std::cout << b; //output: 57

    // Defining and assinging can be combined

    int a { 7 };

    std::cout << a; // output: 7

}

