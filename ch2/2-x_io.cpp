#include <iostream>

int readNumber() {
    int x{};
    std::cout << "Please input an integer\t";
    std::cin >> x;
    return x;
}

void writeAnswer(int answer) {
    std::cout << "Adding your integers together output: " << answer << '\n';
}


