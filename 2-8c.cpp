// this file should be compiled with 2-8d.cpp

#include <iostream>

int getInteger();

int main() {
    int x{getInteger()};
    int y{getInteger()};

	std::cout << x << " + " << y << " is " << x + y << '\n';
    return 0;
}
