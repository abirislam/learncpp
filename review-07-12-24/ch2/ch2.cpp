// 1) initialize a variable with the value from an int function
// 2) create a function for taking user input and return that value
// 3) create a function that prints a given parameter
// 4) create a function that squares the input value
// 5) create a function that has 2 parameters
// 6) forward declare a function with its definition in another file
// 7) create a header file with the functions from 6 that include the forward declarations


#include <iostream>
#include "ch2_defs.h"

int main() {

    int a { getNum() };
    printNum(a);
    std::cout << "Your number squared is: " << squareNum(a) << '\n';
    std::cout << "Your number plus my number is: " << twoSum(a, 63) << '\n';
    
    return 0;
}
