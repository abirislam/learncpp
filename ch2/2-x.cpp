#include <iostream>

int readNumber();
void writeAnswer(int answer);

int main() {
    int num1{ readNumber() };
    int num2{ readNumber() };
    writeAnswer(num1 + num2);

    return 0;
}

int readNumber() {
    int x{};
    std::cout << "Please input an integer\t";
    std::cin >> x;
    return x;
}

void writeAnswer(int answer) {
    std::cout << "Adding your integers together gives " << answer << '\n';
}
