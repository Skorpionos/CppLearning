#pragma once

#include "PlayerFactory.h"

class GoalkeeperFactory : public PlayerFactory
{
public:
    virtual SharedPlayer Create(const std::string& name = "Unknown", uint16_t dateOfBirth = 2001) override;

};
