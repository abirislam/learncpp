#include <iostream>


// inline namespaces allow us to test new functions that will replace old ones
// inlines will get favored over regular namespaces
// so the play is to put the old function inside a namespace
// put the new function inside a namespace as well but make sure the new one is inline
// so you can test it

// also there are unnamed namespaces
// these namespaces get internal linkage, much like static functions
// but u can group all functions u want to make static in one section with an unnamed 
// namespace to make readability better

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

// combination of unnamed and inline namespace
inline namespace V3
{
    namespace 
    {
        void print2()
        {
            std::cout << "this is unammed inline namespace\n";
        }
    }
}

// unnamed namespace (to get internal linkage)
namespace
{
    void bob()
    {
        std::cout << "doke!\n";
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
    V3::print2();
    bob();
    return 0;
}
