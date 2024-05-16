#include <iostream>

namespace V1 
{
    void print()
    {
        std::cout << "this is v1!!!!\n";
    }
}

inline namespace V2
{
    void print()
    {
        std::cout << "this is v2!!!!\n";
    }
}

int main() 
{
    using std::cout;
    cout << "we are in main\n";
    cout << "calling v2 implicitly as inlines always get favored over non-inlines\n";
    print();
    cout << "now calling v1 explicitly\n";
    V1::print();
    return 0;
}
