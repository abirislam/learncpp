// prefix/postfix increment and decrement
#include <iostream>

int main() {
    int x { 5 };
    // increment x to 6, evaluate x to the value 6, and finally asign 6 to y
    int y { ++x };

    std::cout << x << " and " << y << '\n';

    int a { 7 };
    // copy of a is made, then actual a is incremented to 8, and then b is assigned 7
    // so basically we increment the former variable and then assign the old value of the former variable to the new variable
    int b { x++ };

    std::cout << a << " and " << b << '\n';
    return 0;
}


