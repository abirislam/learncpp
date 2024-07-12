// create a program that allows users to input any two decimal numbers and perform operations on them
// functions should be in a different file and a header file should also be made
// create a makefile

#include <iostream>
#include "ch4_funcs.h"

int main() {
    double a{ takeInput() };
    double b{ takeInput() };
    char c{ detOperation() };
    doMaths(a, b, c);
}
