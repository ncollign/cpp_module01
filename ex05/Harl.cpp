#include "Harl.hpp"

Harl::Harl() {}

Harl::~Harl() {}

void Harl::debug() {
    std::cout << "[ DEBUG ]" << std::endl;
    std::cout << "I love having extra bacon for my burger." << std::endl;
}

void Harl::info() {
    std::cout << "[ INFO ]" << std::endl;
    std::cout << "Adding extra bacon costs more money." << std::endl;
}

void Harl::warning() {
    std::cout << "[ WARNING ]" << std::endl;
    std::cout << "I think I deserve free bacon." << std::endl;
}

void Harl::error() {
    std::cout << "[ ERROR ]" << std::endl;
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain(std::string level) {
    void (Harl::*functions[4])() = { &Harl::debug, &Harl::info, &Harl::warning, &Harl::error };
    std::string levels[4] = { "DEBUG", "INFO", "WARNING", "ERROR" };

    for (int i = 0; i < 4; i++) {
        if (levels[i] == level) {
            (this->*functions[i])();
            return;
        }
    }
    std::cout << "[ UNKNOWN LEVEL ]" << std::endl;
}
