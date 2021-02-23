//LearnCPP :: Quiz 2
#include "io.h"
#include <iostream>
using namespace std;



int main()
{
    //START
    int x{0};
    int y{0};

    //Get User Input
    x = readNumber();
    y = readNumber();

    //Output Result
    writeAnswer(x+y);
}

