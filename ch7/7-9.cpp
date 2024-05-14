// if we need to use constants throughout many different files in a program
// its best case to use inline variables
// inline variables are variables that can have more than one definition as long as those definitons are indentical
// by making our constexpr variables inline, we can define them in a header file and #include them into any .cpp file that needs them


// assume this block lives in constants.h

#ifndef CONSTANTS_H
#define CONSTANTS_H

namespace constants 
{
    inline constexpr double pi { 3.14 };
    inline constexpr double gravity { 9.8 };
}

// we then #include constants.h

#include "constants.h"

#include <iostream>

int main()
{
    std::cout << "Enter a radius: ";
    double radius{};
    std::cin >> radius;

    std::cout << "The circumference is: " << 2 * radius * constants::pi << '\n';

    return 0;
}
