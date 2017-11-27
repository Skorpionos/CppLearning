#pragma once

#include "Player.h"

class Goalkeeper : public Player
{
public:
    Goalkeeper(const std::string& name = "Unknown", uint8_t age = ageDefault);
    virtual void Info() override;
};

