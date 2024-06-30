#include "2-11_add.h"
#include <iostream>

// everything in an include gets dumped into the current file
// which means that the add.h method forward declaration also gets included
int main() {
    std::cout << "The sum of 3 and 4 is " << add(3, 4) << '\n';
    return 0;
}
