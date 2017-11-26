#include "FieldPlayer.h"

#include <iostream>

FieldPlayer::FieldPlayer(const std::string& name, uint16_t dateOfBirth)
        : Player(name, dateOfBirth) { }

void FieldPlayer::Info()
{
    std::cout << "Field player: "
              << GetName()
              << ", "
              << GetAge()
              << " age"
              << std::endl;
}
