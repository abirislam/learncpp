#include <iostream>

int main() {
    std::cout << "Please enter the number 0 or 1:\t";
    int x{};
    std::cin >> x;


    if (x == 1)
        std::cout << "Thanks for entering the true number!\n";
    else if (x == 0)
        std::cout << "Thanks for entering the false number!\n";
    else
        std::cout << "Wow, you failed!\n";

    return 0;
}
