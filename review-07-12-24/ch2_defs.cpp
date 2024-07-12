#include <iostream>

int getNum() {
    int num{};
    std::cout << "Please pick a number:\t";
    std::cin >> num;

    return num;
}

void printNum(int input) {
    std::cout << "You picked the number: " << input << '\n';
}

int squareNum(int input) {
    return input * input;
}

int twoSum(int a, int b) {
    return a + b;
}
