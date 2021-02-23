//Exercise from Chapter O.2, Extra Credit
#include <bitset>
#include <iostream>
 
// "rotl" stands for "rotate left"
std::bitset<4> rotl(std::bitset<4> bits)
{
// Your code here
    const std::bitset<4> leftBit =  std::bitset<4>{ 0b1000 } & bits;

    bits <<= 1;

    if(leftBit == std::bitset<4>{ 0b1000 })
        bits = bits | std::bitset<4>{ 0b0001 };

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