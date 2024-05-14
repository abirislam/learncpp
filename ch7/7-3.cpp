#include <iostream>

int main()
{
    std::cout << "Enter an integer:\t";
    int smaller{};
    std::cin >> smaller;

    std::cout << "Enter a larger integer:\t";
    int larger{};
    std::cin >> larger;

    if (smaller > larger) 
    {
        std::cout << "Swapping the values\n";
        int smallerCopy { smaller };
        smaller = larger;
        larger = smallerCopy;
    }

    std::cout << "The smaller value is " << smaller << '\n';
    std::cout << "The larger value is " << larger << '\n';
}
