//Ch6.3 Quiz Question 1, testing variable scope
#include <iostream>
using namespace std;

int getInteger()
{
    int x{};
    cin >> x;
    return x;
}

int main()
{
    cout << "Enter an integer: ";
    int smaller{getInteger()};

    cout << "Enter a larger integer: ";
    int larger{getInteger()};

    if(smaller > larger)
    {
        int temp{smaller};
        smaller = larger;
        larger = temp;
        cout << "Swapping the values\n";
    }

    cout << "The smaller value is " << smaller << endl;
    cout << "The larger value is " << larger << endl;
}