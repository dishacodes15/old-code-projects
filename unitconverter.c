#include <iostream>
#include <iomanip>

void unitConverter() {
    int choice;
    float value;
    float INRtoUSDfctr = 0.011f;
    float INRtoJPYfctr = 1.73f;
    float INRtoEURfctr = 0.011f;
    float KGtoLBfctr = 2.204f;
    float LBtoKGfctr = 0.453f;

    std::cout << "Unit Converter\n";
    std::cout << "1. Currency\n";
    std::cout << "2. Temperature\n";
    std::cout << "3. Mass\n";
    std::cout << "Enter your choice: ";
    std::cin >> choice;

    switch (choice) {
        case 1:
            std::cout << "Currency Converter\n";
            std::cout << "1. INR to USD\n";
            std::cout << "2. INR to JPY\n";
            std::cout << "3. INR to EUR\n";
            std::cout << "Enter your choice: ";
            std::cin >> choice;

            switch (choice) {
                case 1:
                    std::cout << "Enter INR value: ";
                    std::cin >> value;
                    std::cout << std::fixed << std::setprecision(2) << value << " INR = " << value * INRtoUSDfctr << " USD\n";
                    break;
                case 2:
                    std::cout << "Enter INR value: ";
                    std::cin >> value;
                    std::cout << std::fixed << std::setprecision(2) << value << " INR = " << value * INRtoJPYfctr << " JPY\n";
                    break;
                case 3:
                    std::cout << "Enter INR value: ";
                    std::cin >> value;
                    std::cout << std::fixed << std::setprecision(2) << value << " INR = " << value * INRtoEURfctr << " EUR\n";
                    break;
                default:
                    std::cout << "Invalid choice!\n";
            }
            break;
        case 2:
            std::cout << "Temperature Converter\n";
            std::cout << "1. Celsius to Fahrenheit\n";
            std::cout << "2. Fahrenheit to Celsius\n";
            std::cout << "Enter your choice: ";
            std::cin >> choice;

            switch (choice) {
                case 1:
                    std::cout << "Enter Celsius value: ";
                    std::cin >> value;
                    std::cout << std::fixed << std::setprecision(2) << value << " Celsius = " << (value * 9 / 5) + 32 << " Fahrenheit\n";
                    break;
                case 2:
                    std::cout << "Enter Fahrenheit value: ";
                    std::cin >> value;
                    std::cout << std::fixed << std::setprecision(2) << value << " Fahrenheit = " << (value - 32) * 5 / 9 << " Celsius\n";
                    break;
                default:
                    std::cout << "Invalid choice!\n";
            }
            break;
        case 3:
            std::cout << "Mass Converter\n";
            std::cout << "1. Kilograms to Pounds\n";
            std::cout << "2. Pounds to Kilograms\n";
            std::cout << "Enter your choice: ";
            std::cin >> choice;

            switch (choice) {
                case 1:
                    std::cout << "Enter kilograms value: ";
                    std::cin >> value;
                    std::cout << std::fixed << std::setprecision(2) << value << " kilograms = " << value * KGtoLBfctr << " pounds\n";
                    break;
                case 2:
                    std::cout << "Enter pounds value: ";
                    std::cin >> value;
                    std::cout << std::fixed << std::setprecision(2) << value << " pounds = " << value * LBtoKGfctr << " kilograms\n";
                    break;
                default:
                    std::cout << "Invalid choice!\n";
            }
            break;
        default:
            std::cout << "Invalid choice!\n";
    }

    unitConverter(); // Recursive call to repeat the process
}

int main() {
    unitConverter(); // Start the recursive function
    return 0;
}
