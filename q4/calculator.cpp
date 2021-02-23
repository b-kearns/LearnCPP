#include <iostream>
using namespace std;

double getDouble();
char getOperator();

int main()
{
    //Get Input, 2 Doubles
    double a{getDouble()};
    double b{getDouble()};

    char op{getOperator()};

    if(op == '+')
    {
        //Handle Addition
        cout << a << " + " << b << " is " << a+b;
    }
    else if(op == '-')
    {
        //Handle Subtraction
        cout << a << " - " << b << " is " << a-b;
    }
    else if(op == '*')
    {
        //Handle Multiplication
        cout << a << " * " << b << " is " << a*b;
    }
    else if(op == '/')
    {
        //Handle Division
        cout << a << " / " << b << " is " << a/b;
    }
    else
    {
        return -1;
    }

    cout << endl;
    return 1;
}

double getDouble()
{
    double x{0.0};
    cout << "Enter a double value: ";
    cin >> x;

    return x;
}

char getOperator()
{
    char x{'.'};
    cout << "Enter on of the following: +,-,*, or /, ";
    cin >> x;
    
    return x;
}