#pragma once

#include "Player.h"

class FieldPlayer : public Player
{
public:
    explicit FieldPlayer(const std::string& name = "Unknown", uint8_t age = YoungPlayerAge);
    void Info() override;
};

