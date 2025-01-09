#include <iostream>
#include "conversions.h"
#include "validation.h"

void ConvertWeight() {
    int Option;
    double Result, Value;

    std::cout << "\n==================== WEIGHT CONVERTER ====================";
    std::cout << "\n----------------------------------------------------------";
    std::cout << "\n/t/t[1] - Kilograms to Pounds";
    std::cout << "\n/t/t[2] - Pounds to Kilograms";
    std::cout << "\n----------------------------------------------------------";
    std::cout << "\nEnter your choice: ";
    std::cin >> Option;

    if (Option == 1) {
        do {
            std::cout << "\nEnter the weight in Kilograms for conversion: ";
            std::cin >> Value;
            if (!ValidateEntry(Value)) {
                std::cout << "\nERROR: Invalid entry. Please enter a positive number.\n";
            }
        } while (!ValidateEntry(Value));
        Result = Value * 2.20462;
        std::cout << "\nThe value " << Value << " in Kilograms to Pounds is: " << Result << "\n";
    } else if (Option == 2) {
        do {
            std::cout << "\nEnter the weight in Pounds for conversion: ";
            std::cin >> Value;
            if (!ValidateEntry(Value)) {
                std::cout << "\nERROR: Invalid entry. Please enter a positive number.\n";
            }
        } while (!ValidateEntry(Value));
        Result = Value / 2.20462;
        std::cout << "\nThe value " << Value << " in Pounds to Kilograms is: " << Result << "\n";
    } else {
        std::cout << "\nERROR: Invalid option entered.\n";
    }
}

void ConvertDistance()
{
    int Option;
    double Result, Distance;

    std::cout << "\n==================== DISTANCE CONVERTER ====================";
    std::cout << "\n------------------------------------------------------------";
    std::cout << "\n\t\t[1] - Kilometers to Miles";
    std::cout << "\n\t\t[2] - Miles to Kilometers";
    std::cout << "\n------------------------------------------------------------";
    std::cout << "\nEnter your choice: ";
    std::cin >> Option;

    switch (Option)
    {
        case 1:
            do 
            {
                std::cout << "\nEnter the distance in kilometers for conversion: ";
                std::cin >> Distance;
                if (!ValidateEntry(Distance))
                {
                    std::cout << "\nERROR: Invalid entry. Please enter a positive number.\n";
                }
            } while (!ValidateEntry(Distance));
            Result = Distance * 0.621371;
            std::cout << "\nThe distance " << Distance << " km in miles is: " << Result << "\n";
            break;
        case 2:
            do 
            {
                std::cout << "\nEnter the distance in miles for conversion: ";
                std::cin >> Distance;
                if (!ValidateEntry(Distance))
                {
                    std::cout << "\nERROR: Invalid entry. Please enter a positive number.\n";
                }
            } while (!ValidateEntry(Distance));
            Result = Distance * 1.60934;
            std::cout << "\nThe distance " << Distance << " mi in kilometers is: " << Result << "\n";
            break;
        default:
            std::cout << "\nERROR: Invalid option entered.";
            break;
    }
}

void ConvertTemperature()
{
    int Option;
    double Result, Temperature;

    std::cout << "\n==================== TEMPERATURE CONVERTER ====================";
    std::cout << "\n---------------------------------------------------------------";
    std::cout << "\n\t\t[1] - Convert Celsius";
    std::cout << "\n\t\t[2] - Convert Fahrenheit";
    std::cout << "\n\t\t[3] - Convert Kelvin";
    std::cout << "\n---------------------------------------------------------------";
    std::cout << "\nEnter your choice: ";
    std::cin >> Option;

    if (Option == 1)
    {
        int Choice;
        std::cout << "\nConverting Celsius to..." << "\n";
        std::cout << "\n[1] - Fahrenheit";
        std::cout << "\n[2] - Kelvin";
        std::cout << "\nEnter your choice: ";
        std::cin >> Choice;

        switch (Choice)
        {
            case 1: 
                std::cout << "\nEnter the value in Celsius: " << "\n";
                std::cin >> Temperature;
                
                Result = (Temperature * 1.8) + 32;

                std::cout << Temperature << " Celsius in Fahrenheit is: " << Result << std::endl;
                break;
            case 2: 
                std::cout << "\nEnter the value in Celsius: " << "\n";
                std::cin >> Temperature;
                
                Result = Temperature + 273.15;

                std::cout << Temperature << " Celsius in Kelvin is: " << Result << std::endl;
                break;
            default: 
                std::cout << "\nERROR: Invalid option!";
                break;
        }
    } else if (Option == 2)
    {
        int Choice;
        std::cout << "\nConverting Fahrenheit to..." << "\n";
        std::cout << "\n[1] - Celsius";
        std::cout << "\n[2] - Kelvin";
        std::cout << "\nEnter your choice: ";
        std::cin >> Choice;

        switch (Choice)
        {
            case 1: 
                std::cout << "\nEnter the value in Fahrenheit: " << "\n";
                std::cin >> Temperature;
                
                Result = (Temperature - 32) / 1.8;

                std::cout << Temperature << " Fahrenheit in Celsius is: " << Result << std::endl;
                break;
            case 2: 
                std::cout << "\nEnter the value in Fahrenheit: " << "\n";
                std::cin >> Temperature;

                Result = ((Temperature - 32) / 1.8) + 273.15;

                std::cout << Temperature << " Fahrenheit in Kelvin is: " << Result << std::endl;
                break;
            default: 
                std::cout << "\nERROR: Invalid option!";
                break;
        }
    } else if (Option == 3)
    {
        int Choice;
        std::cout << "\nConverting Kelvin to..." << "\n";
        std::cout << "\n[1] - Celsius";
        std::cout << "\n[2] - Fahrenheit";
        std::cout << "\nEnter your choice: ";
        std::cin >> Choice;

        switch (Choice)
        {
            case 1: 
                do 
                {
                    std::cout << "\nEnter the value in Kelvin: " << "\n";
                    std::cin >> Temperature;
                    if (!ValidateEntry(Temperature))
                    {
                        std::cout << "\nERROR: Invalid entry. Please enter a positive number.\n";
                    }
                } while (!ValidateEntry(Temperature));
                
                Result = Temperature - 273.15;

                std::cout << Temperature << " Kelvin in Celsius is: " << Result << std::endl;
                break;
            case 2: 
                do 
                {
                    std::cout << "\nEnter the value in Kelvin: " << "\n";
                    std::cin >> Temperature;
                    if (!ValidateEntry(Temperature))
                    {
                        std::cout << "\nERROR: Invalid entry. Please enter a positive number.\n";
                    }
                } while (!ValidateEntry(Temperature));

                Result = ((Temperature - 273.15) * 1.8) + 32;

                std::cout << Temperature << " Kelvin in Fahrenheit is: " << Result << std::endl;
                break;
            default: 
                std::cout << "\nERROR: Invalid option!";
                break;
        }
    }
}