#include <iostream>

int main() {
    // predifined variables from the iostream (std::cout, std::cin, etc)

    std::cout << 2 << std::endl << 3; 
    std::cout << 2 << '\n' << 3; //does the same as the one on top

    //taking input from user

    int x{};
    std::cout << "Enter a number: ";
    std::cin >> x;
    std::cout << "You entered: " << x;
    

    //get two numbers

    int y{}; //its preferred to initialize the variable even if it will be 
             // overwritten
    int z{};

    std::cin >> y >> z;

    /* std::cin is buffered which allows us to do multiple
    extractions with the input from the user(which is why cpp 
    is recommended for programming competitions )*/

    ////////////////////

    int a{};
    int b{};
    int c{};

    std::cin >> a >> b >> c;
    std::cout << "You entered " << a << ", " << b << ", " << c << ".\n";
    
    return 0;
}

