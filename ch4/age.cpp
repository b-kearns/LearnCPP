#include <iostream>
using namespace std;

int main()
{
    string name{""};
    cout << "Enter your full name: ";

    getline(cin, name);

    double age{0};
    cout << "Enter your age in years: ";
    cin >> age;

    cout << "You've lived " << age / name.length() << " years for each letter in your name.";

}