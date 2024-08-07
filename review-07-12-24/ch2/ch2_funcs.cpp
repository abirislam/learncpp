#include <iostream>
#include "ch2_funcs.h"

int subtract(int a, int b) {
    return a - b;
}

int getValueFromUser() {
    std::cout << "Please enter an integer:\t";
    int input{};
    std::cin >> input;

    return input;
}

int squareInput(int input) {
    return input * input;
}
