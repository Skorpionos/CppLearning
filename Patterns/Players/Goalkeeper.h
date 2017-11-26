#pragma once

#include "Player.h"

class Goalkeeper : public Player
{
public:
    Goalkeeper(const std::string& name = "Unknown", uint16_t dateOfBirth = 2001);
    virtual void Info() override;
};

