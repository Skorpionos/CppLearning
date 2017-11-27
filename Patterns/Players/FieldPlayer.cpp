#include "FieldPlayer.h"

#include <iostream>

FieldPlayer::FieldPlayer(const std::string& name, uint8_t age)
        : Player(name, age) { }

void FieldPlayer::Info()
{
    std::cout << "<" << GetId() << "> "
              << "FieldPlayer: " << GetName() << ", "
              << static_cast<uint16_t>(GetAge()) << " age" << std::endl;
}
