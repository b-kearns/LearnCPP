//Ch8.4 Question 2
#include <iostream>

struct Fraction
{
    int numerator{};
    int denominator{};
};

Fraction getFraction()
{
    Fraction f{};
    std::cout << "Input a numerator: ";
    std::cin >> f.numerator;
    std::cout << "Input a denominator: ";
    std::cin >> f.denominator;

    return f;
}

double multiply(Fraction a, Fraction b)
{
    return (static_cast<double>(a.numerator * b.numerator))/(a.denominator * b.denominator);
}

int main()
{
    Fraction a{getFraction()};
    Fraction b{getFraction()};

    std::cout << "Result: " << multiply(a, b) << std::endl;
}