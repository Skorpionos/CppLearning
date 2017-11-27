#include "Goalkeeper.h"

#include <iostream>

Goalkeeper::Goalkeeper(const std::string& name, uint8_t age)
        : Player(name, age) { }

void Goalkeeper::Info()
{
    std::cout << "<" << GetId() << "> "
              << "Goalkeeper: " << GetName() << ", "
              << static_cast<uint16_t>(GetAge()) << " age" << std::endl;
}
