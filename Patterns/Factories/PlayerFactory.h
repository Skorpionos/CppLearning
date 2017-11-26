#pragma once

#include "../Players/Player.h"

class PlayerFactory
{
public:
    virtual ~PlayerFactory() = default;
    virtual SharedPlayer Create(const std::string& name = "Unknown", uint16_t dateOfBirth = 2001) {};
};

typedef std::shared_ptr<PlayerFactory> SharedFactory;