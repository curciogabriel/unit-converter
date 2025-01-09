#include <iostream>
#include "menu.h"
#include "conversions.h"

void Menu()
{
    int Option;

    std::cout << "\n==================== CONVERSION MENU ====================";
    std::cout << "\n---------------------------------------------------------";
    std::cout << "\n\t\t[1] - Temperature converter";
    std::cout << "\n\t\t[2] - Distance converter";
    std::cout << "\n\t\t[3] - Weight converter";
    std::cout << "\n---------------------------------------------------------";
    std::cout << "\nEnter your choice: ";
    std::cin >> Option;

    switch (Option)
    {
        case 1: 
            ConvertTemperature();
            break;
        case 2: 
            ConvertDistance();
            break;
        case 3:
            ConvertWeight();
            break;
        default:
            std::cout << "\nERROR: Invalid option.";
            break;
    }
}