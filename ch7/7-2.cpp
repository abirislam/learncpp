#include <iostream>

namespace Foo 
{
    void print()
    {
        std::cout << "wadedoooo\n";
    }
}

namespace Goo
{
    void print()
    {
        std::cout << "oh heck nawww\n";
    }
}

// this is the same as nesting namespace Koeru inside Nani`
namespace Nani::Koeru 
{
    void print()
    {
        std::cout << "mAMA MIAAAA\n";
    }
}

int main()
{
    namespace Bruh = Nani::Koeru; // Bruh is an alias for Nani::Koeru
    std::cout << "this will print out Foo:"; 
    Foo::print();
    std::cout << "this will print out Goo:";
    Goo::print();
    Bruh::print();
    
    return 0;
}
