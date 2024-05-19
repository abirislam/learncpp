#include "Random.h"
#include <iostream>

int main()
{
    for (int i{ 0 }; i < 5; ++i)
    {
        std::cout << Random::get(1, 6) << '\n';
    }

    return 0;
}
