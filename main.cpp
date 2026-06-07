#include <iostream>
#include <string>
#include <cstdint>

int main() {
    std::cout << "TechVac Bank\n";

    std::string name;
    int16_t age;
    std::string address;

    std::cout << "How can we help you?\n";

    std::cout << "Enter your name: ";
    std::cin >> name;

    std::cout << "Enter your age: ";
    std::cin >> age;

    std::cin.ignore(); // important before getline

    std::cout << "Enter your address: ";
    std::getline(std::cin, address);

    std::cout << "\n--- Summary ---\n";
    std::cout << "Name: " << name << "\n";
    std::cout << "Age: " << age << "\n";
    std::cout << "Address: " << address << "\n";

    return 0;
}