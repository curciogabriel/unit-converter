#include <iostream>

void convertWeight() {
    int option;
    double result, value;

    std::cout << "\n=====Choose a conversion option:=====";
    std::cout << "\n1. Convert from Kilograms to Pounds";
    std::cout << "\n2. Convert from Pounds to Kilograms";
    std::cout << "\nEnter your choice: ";
    std::cin >> option;

    if (option == 1) {
        std::cout << "\nEnter the weight in Kilograms for conversion: ";
        std::cin >> value;
        result = value * 2.20462;
        std::cout << "\nThe value " << value << " in Kilograms is equivalent to " << result << " Pounds.\n";
    } else if (option == 2) {
        std::cout << "\nEnter the weight in Pounds for conversion: ";
        std::cin >> value;
        result = value / 2.20462;
        std::cout << "\nThe value " << value << " in Pounds is equivalent to " << result << " Kilograms.\n";
    } else {
        std::cout << "\nInvalid option entered.\n";
    }
}

int main() {
    convertWeight();
    return 0;
}
