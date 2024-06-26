#include <bitset>
#include <iostream>

// "rotl" stands for "rotate left"
std::bitset<4> rotl(std::bitset<4> bits)
{
    bool isThereLeftBit { false };
    constexpr std::bitset<4> checkLeftmostBit {0b1000};
    if ((bits & checkLeftmostBit) == 0b1000)
        isThereLeftBit = true;
    else
        isThereLeftBit = false;
    
    bits <<= 1;

    if (isThereLeftBit)
        bits ^= 0001;

    return bits;
}

int main()
{
	std::bitset<4> bits1{ 0b0001 };
	std::cout << rotl(bits1) << '\n';

	std::bitset<4> bits2{ 0b1001 };
	std::cout << rotl(bits2) << '\n';

	return 0;
}
