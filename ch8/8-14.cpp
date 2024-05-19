#include <iostream>
#include <random>
// #include <chrono>


int main()
{
    // insantiate a 32-bit meresenne twister, for 64-bit we can
    // append _64 (std::mt19937_64)
    // we need to use a different seed other than 0 else we're going to get the same 
    // results every run
   
    // we use random device to give seed_seq more data to work with
    // seed_seq will generate as many additonal unbiased seed values needed to initalize
    // MT PRNG state
    // by using 8 random numbers instead of 1 to initalize our seed seq will be better
    std::random_device rd{};
    std::seed_seq ss{ rd(), rd(), rd(), rd(), rd(), rd(), rd(), rd() };
    std::mt19937 mt { ss };

    //create a resuable rng that generates uinform numbers between 1-6 (inclusive)
    std::uniform_int_distribution cast_die{1, 6};
    
    for (int i{ 1 }; i <= 100; ++i)
    {
        std::cout << cast_die(mt) << '\t';

        if (i % 10 == 0)
        {
            std::cout << '\n';
        }
    }
    
    return 0;
}
