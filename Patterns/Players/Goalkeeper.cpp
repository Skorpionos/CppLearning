#include "Goalkeeper.h"

#include <iostream>

Goalkeeper::Goalkeeper(const std::string& name, uint16_t dateOfBirth)
        : Player(name, dateOfBirth) { }

void Goalkeeper::Info()
{
    std::cout << "Goalkeeper: "
              << GetName()
              << ", "
              << GetAge()
              << " age"
              << std::endl;
}
