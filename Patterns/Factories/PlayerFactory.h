#pragma once

#include "../Players/Player.h"

class PlayerFactory
{
public:
    virtual ~PlayerFactory() = default;
    virtual SharedPlayer Create(const std::string& name = "Unknown", uint8_t age = ageDefault) {};
};

typedef std::shared_ptr<PlayerFactory> SharedFactory;