#include <iostream>

// within a constexpr or consteval function, we can use local variables that are not constexpr, and the value of these variables can be changed
consteval int doSomething(int x, int y) {
    // we can modify the value of non-const function parameters
    x += 2;

    // we can instantiate non-const local variables
    int z { x + y };
    if (x > y)
        // and we can modify their values
        z -= 1;

    return z;
}


int main () {
    // when this function is evaluated at compile-time, the compiler will "execute" the function and return the calculated value
    constexpr int g { doSomething(5, 6) };
    std::cout << g << '\n';

    return 0;
}
