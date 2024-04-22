#include <iostream>

#define LION_KING

int main() {

#ifdef LION_KING
    std::cout << "YA BOY THE LION_KING!!!!\n";
#endif

#ifdef ZOOWEEMAMA
    std::cout << "YA BOY ZOOWEEMAMA!!!\n";
#endif

#ifndef MISTA_KILLA
    std::cout << "yA BOY MIStA KILAAAAA!!\n";
#endif
    
#ifndef LION_KING
    std::cout << "LION KING HAS FADED\n";
#endif

#if 0
    std::cout << "I got a pocket full of change";
#endif

#if 1
    std::cout << "I got dolla dolla bills";
#endif

    return 0;
}
