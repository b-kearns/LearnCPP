//Ch8.4 Question 1
#include <iostream>

struct Advertising
{
    int adAmount{};
    double adPercent{};
    double revenuePerAd{};
};

void printAdvertising(Advertising ad)
{
    std::cout << "Amount of ads shown: " << ad.adAmount << std::endl;
    std::cout << "Percent of ads clicked: " << ad.adPercent << std::endl;
    std::cout << "Revenue per ad: " << ad.revenuePerAd << std::endl;
    std::cout << "Total earned: " << ad.adAmount * ad.adPercent / 100 * ad.revenuePerAd << std::endl;
}

int main()
{
    Advertising ad{};
    std::cout << "Please enter the amount of ads being shown: ";
    std::cin >> ad.adAmount;
    std::cout << "Please enter the percent of ads clicked: ";
    std::cin >> ad.adPercent;
    std::cout << "Please enter the revenue per ad: ";
    std::cin >> ad.revenuePerAd;
    
    printAdvertising(ad);

    return 1;
}