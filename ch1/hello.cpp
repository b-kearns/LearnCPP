#include<iostream>
using namespace std;

void firstExercise()
{
    cout << "Hello Brandon, please enter a number:\n";
    int x{0};
    int y{0};
    cin >> x;
    cout << "You Entered: " << x << "\n";
    cout << "Enter a second number:\n";
    cin >> y;
    cout << "You Entered: " << y << "\n";
    cout << "Difference = " << x - y << "\n";
}

int main()
{
    //LearnCPP :: First Exercise
    firstExercise();
    
    return 0;
}