#include <iostream>

int main () {
    [[maybe_unused]]int a = 3; // defautl-initialization (no initializer)

    // Traditional initialization forms:
    int b = 5;     // copy-initialization (initial value after equals sign)
    int c ( 6 );   // direct-initialization (initial value in parenthesis)

    // Modern initialization forms (preferred):
    int d { 7 };   // direct-list-initialization (initial value in braces)
    int e {};      // value-initialization (empty braces)

    // We can do multiple variables too

    int f{}, g{7};
    
    return 0;
}
