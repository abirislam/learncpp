#include <iostream>

// consteval function must evaluate at compile-time else it will error
// thus the function must be able to be evaluated at compile-time
consteval int greater(int x, int y) {
    return (x > y ? x : y);
}

int main() {
    
    // we dont have to do this but this will still work
    constexpr int g { greater(5, 6) };
    std::cout << g << " is greater!\n";

    // using consteval we can just use this
    std::cout << greater(5, 6) << " is greater!\n";

    // if we were to call the expression with a value that isnt known at compile-time, the program will error and crash like this
    // int x { 5 }; //not a constexpr
    // std::cout << greater(x, 6) << " is greater!\n";
    return 0;
}
