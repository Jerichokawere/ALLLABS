#pragma once
#include "Persons.h"
int main() {
    Persons Jane("Jane", 30);
    Persons John("John", 40);

    if (Jane == John) {
        std::cout << "Jane and John have the same first name." << std::endl;
    }
    if (Jane != John) {
        std::cout << "Jane and John have different first names." << std::endl;
    }
    if (Jane < John) {
        std::cout << "Jane is younger than John." << std::endl;
    }
    if (John > Jane) {
        std::cout << "John is older than Jane." << std::endl;
    }

    return 0;
}