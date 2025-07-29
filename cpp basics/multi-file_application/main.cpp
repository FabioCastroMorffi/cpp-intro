#include <iostream>

int add(int x, int y); // needed so main.cpp knows that add() is a function defined elsewhere

/*To tell the compiler where to look update tasks.json by adding the files that are processed
at the place of ${file}*/
int main()
{
    std::cout << "The sum of 3 and 4 is: " << add(3, 4) << '\n';
    return 0;
}
