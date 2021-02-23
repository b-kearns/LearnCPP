#include "io.h"
#include <iostream>
using namespace std;

int readNumber()
{
    int x{0};
    
    cout << "Enter an integer: \n";
    cin >> x;

    return x;
}

void writeAnswer(int result)
{
    cout << result << endl;
}