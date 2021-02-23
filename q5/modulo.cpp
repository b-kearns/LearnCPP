//Write a program that asks the user to input an integer, and tells the user whether the number is even or odd. Write a function called isEven() that returns true if an integer passed to it is even, 
//and false otherwise. Use the modulus operator to test whether the integer parameter is even.
#include <iostream>
using namespace std;

int getInput();
bool isEven(int x);

int main()
{
    int x{getInput()};
    
    if(isEven(x))
        cout << x << " is even.\n";
    else
        cout << x << " is odd.\n";
}

int getInput()
{
    int x{};
    cout << "Enter an integer: ";
    cin >> x;

    return x;
}

bool isEven(int x)
{
    return (x % 2) == 0;
}