#include <iostream>

int main() {
    std::cout << "Please enter the number 1:\t";
    int x{};
    std::cin >> x;

    if (x == 1)
        std::cout << "Thanks for entering the correct number!\n";
    else
        std::cout << "Wow, you failed!\n";

    return 0;
}
