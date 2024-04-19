#include <iostream>

int main() {
    std::cout << "Please enter an integer: ";
    int x{};
    std::cin >> x;
    std::cout << "Double " << x << " is: " << 2 * x << '\n';
    std::cout << "Triple " << x << " is: " << 3 * x << '\n';
    return 0;
}
