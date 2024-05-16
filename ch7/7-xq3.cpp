#include <iostream>

int accumulate(int x) 
{
    // we want x to have static duration so we make a copy and make it static
    static int sum{0};
    sum += x;
    // copy the current value of y, update y to y+1, return copied value
    return sum;
}
int main()
{
    std::cout << accumulate(4) << '\n'; // prints 4
    std::cout << accumulate(3) << '\n'; // prints 7
    std::cout << accumulate(2) << '\n'; // prints 9
    std::cout << accumulate(1) << '\n'; // prints 10

    return 0;
}
