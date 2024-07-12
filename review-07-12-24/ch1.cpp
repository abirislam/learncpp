#include <iostream>

// create and initalize variables
// use input and output

int main() {

    int x{};
    int y{};

    std::cout << "Tell me how old you are:\t";
    std::cin >> y;
    std::cout << y << "? Jesus that is young!\n";
    x = y * 2;
    std::cout << "I am cooler, im double ur age, im " << x << '\n';

    return 0;
}
