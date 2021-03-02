#include <iostream>
#include <string>
#include <string_view>


std::string getName()
{
    std::string name{};
    std::cout << "Enter name: ";
    std::getline(std::cin, name);
    return name;
}

int main()
{
    std::string names[]{"Alex", "Betty", "Caroline", "Dave", "Emily", "Fred", "Greg", "Holly"};

    const std::string name{getName()};

    for(auto n : names)
    {
        if(n == name)
        {
            std::cout << name << " was found." << std::endl;
            return 0;
        }
    }

    std::cout << name << " was not found." << std::endl;
    return 0;
}