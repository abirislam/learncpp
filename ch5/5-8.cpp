#include <iostream>

// constexpr function
// a function that is eligible to be evaluated at compile-time
constexpr int greater(int x, int y) {
    return (x > y ? x : y);
}

int main() {
    // this is always evaluated at compile-time
    constexpr int g { greater(5, 6) };
    std::cout << g << " is greater!\n";
    
    // this is eligible to be evaluated at either compile-time or runtime
    // 

