#include <iostream>

int main() {
    std::cout << "Please enter an integer 1-9:\t";
    int x{};
    std::cin >> x;
    
    if (x < 0 || x > 9)
        std::cout << "Input out of bounds\n";
    else if (x == 2 || x == 3 || x == 5 || x == 7)
        std::cout << "That number is prime\n";
    else
        std::cout << "That number is not a prime number\n";

    return 0;
}
