#include <iostream>

double distance_converter(double Value, int Unit) 
{
    double Result;

    switch (Unit) 
    {
        case 1:
            // Kilometers to miles
            Result = Value * 0.621371;
            break;
        case 2:
            // Miles to kilometers
            Result = Value * 1.60934;
            break;
        default:
            std::cerr << "ERROR: Invalid unit." << std::endl;
            return -1; // Invalid value
    }

    if (Value <= 0) {
        std::cerr << "ERROR: Invalid value. Value must be greater than zero." << std::endl;
        return -1; // Invalid value
    }

    return Result;
}

int main() 
{
    double Value;
    int Unit;

    std::cout << "Type the distance value: ";
    std::cin >> Value;

    std::cout << "Type 1 for kilometers to mile and 2 for miles to kilometers: ";
    std::cin >> Unit;

    double Result = distance_converter(Value, Unit);

    if (Result != -1) 
    {
        std::cout << "Resultado: " << Result << std::endl;
    }

    return 0;
}