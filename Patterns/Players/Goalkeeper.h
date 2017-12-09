#pragma once

#include "Player.h"

class Goalkeeper : public Player
{
public:
    explicit Goalkeeper(const std::string& name = "Unknown", uint8_t age = YoungPlayerAge);
    void Info() override;
};

