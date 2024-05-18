#include <iostream>

// target sequence:
//        1
//      2 1
//    3 2 1
//  4 3 2 1
//5 4 3 2 1

int main()
{
    int outer{ 1 };
    while (outer <= 5)
    {
        int inner{ 5 };
        while (inner > outer)
        {
            std::cout << "  ";
            --inner;
        }
        while (inner <= outer && inner > 0) 
        {
            std::cout << inner << ' ';
            --inner;
        }
        std::cout << '\n';
        ++outer;
    }

    return 0;
}
