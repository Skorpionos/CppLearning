#pragma once

#include "PlayerFactory.h"

class GoalkeeperFactory : public PlayerFactory
{
public:
    virtual SharedPlayer Create(const std::string& name = "Unknown", uint8_t age = ageDefault) override;

};
