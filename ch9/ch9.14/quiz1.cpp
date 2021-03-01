#include <iostream>
#include <algorithm>
#include <string>
#include <limits>
#include <cstddef>

std::size_t getLength()
{
    std::size_t length{};
    std::cout << "How many names do you want to input: ";
    std::cin >> length;
    return length;
}

void getNames(std::string* names, std::size_t length)
{
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    for(std::size_t itr{0}; itr < length; ++itr)
    {
        std::cout << "Enter name #" << itr+1 << ": ";
        std::getline(std::cin, names[itr]);
    }
}

void printNames(std::string* names, std::size_t length)
{
    std::cout << "Here is your sorted list: " << std::endl;

    for(std::size_t itr{0}; itr < length; ++itr)
    {
        std::cout << "Name #" << itr + 1 << " " << names[itr] << std::endl;
    }
}

int main()
{
    std::size_t length{getLength()};
    auto* names{ new std::string[length]{} };

    getNames(names, length);

    std::sort(names, names + length);

    printNames(names, length);

    delete[] names;

    return 0;
}