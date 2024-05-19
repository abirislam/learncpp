#include <iostream>
// we have to include <cstdlib> for std::exit()

void cleanup()
{
    std::cout << "We're exiting the program and cleaning up\n";
}

int main()
{
    std::atexit(cleanup);

    std::cout << "Exitting program\n";

    std::exit(0);

    std::cout << "This line will never execute\n";

    return 0;

}
