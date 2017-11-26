#pragma once

#include "Player.h"

class FieldPlayer : public Player
{
public:
    FieldPlayer(const std::string& name = "Unknown", uint16_t dateOfBirth = 2001);
    virtual void Info() override;
};

