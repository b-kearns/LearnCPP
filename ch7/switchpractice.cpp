#include <iostream>

int calculate(int a, int b, char c)
{
    switch(c)
    {
        case '+':
            return a + b;
        case '-':
            return a - b;
        case '*':
            return a * b;
        case '/':
            return a / b;
        default:
            std::cout << "Invalid Operator";
            return -1;
    }
}

int getInteger()
{
    int x{};

    std::cout << "Enter an integer: ";
    std::cin >> x;

    return x;
}

int main()
{
    int a{getInteger()};
    int b{getInteger()};

    char c{};
    std::cout << "Enter one of: + - * or / ";
    std::cin >> c;

    std::cout << "Result is: " << calculate(a,b,c) << std::endl;
}