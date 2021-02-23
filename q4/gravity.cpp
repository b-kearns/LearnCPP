#include "constants.h"
#include <iostream>
#include <cmath>

using namespace std;

double getHeight();
double getDistance(int time, double height);
void printResult(int time, double height);

int main()
{
    int time{0};
    
    const double height{getHeight()};
    
    while (time <= 5)
    {
        printResult(time, getDistance(time, height));
        time++;
    }

    return 0;    
}

double getHeight()
{
    double height{0.0};
    cout << "Enter the height of the tower in meters: ";
    cin >> height;

    return height;
}

double getDistance(int time, double height)
{
    double result{static_cast<double>((gravity * (time * time)) / 2.0)};
    
    return height - result;
}

void printResult(int time, double height)
{
    if(height > 0)
        cout << "At " << time << " seconds, the ball is at height: " << height << " meters.\n";
    else
        cout << "At " << time << " seconds, the ball is on the ground.\n";
}