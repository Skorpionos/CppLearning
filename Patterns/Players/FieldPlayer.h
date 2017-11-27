#pragma once

#include "Player.h"

class FieldPlayer : public Player
{
public:
    FieldPlayer(const std::string& name = "Unknown", uint8_t age = ageDefault);
    virtual void Info() override;
};

