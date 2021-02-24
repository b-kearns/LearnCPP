#include <iostream>
#include "constants.h"
 
double calculateHeight(double initialHeight, int seconds)
{
    double distanceFallen = myConstants::gravity * seconds * seconds / 2;
    double heightNow = initialHeight - distanceFallen;
 
    // Check whether we've gone under the ground
    // If so, set the height to ground-level
    if (heightNow < 0.0)
        return 0.0;
    else
        return heightNow;
}
 
double calculateAndPrintHeight(double initialHeight, int time)
{
    double currHeight{calculateHeight(initialHeight, time)};
    std::cout << "At " << time << " seconds, the ball is at height: " << currHeight << "\n";

    return currHeight;
}
 
int main()
{
    using namespace std;
    cout << "Enter the initial height of the tower in meters: ";
    double initialHeight;
    cin >> initialHeight;
	
    double currHeight{initialHeight};
    int time{0};
    while(currHeight > 0)
    {
        currHeight = calculateAndPrintHeight(initialHeight, time);
        ++time;
    }
	
    return 0;
}