#include <iostream>

// trying to make the following output
// 5 4 3 2 1
// 4 3 2 1
// 3 2 1
// 2 1
// 1

int main() 
{
    int outer{ 5 };
    while (outer > 0)
    {
        int inner { outer };
        while (inner > 0)
        {
            std::cout << inner << ' ';
            --inner;
        }
        std::cout << '\n';
        --outer;
    }   
    return 0;
}

