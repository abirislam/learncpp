#include <iostream>

int getValueFromUser() {
    std::cout << "Please enter a number: ";
    int x{};
    std::cin >> x;
    return x;
}

int main() {
    int num {getValueFromUser()};
    std::cout << num << " doubled is: " << num * 2 << '\n';
    return 0;
}
