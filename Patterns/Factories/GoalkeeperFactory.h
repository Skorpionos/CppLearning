#pragma once

#include "PlayerFactory.h"

class GoalkeeperFactory : public PlayerFactory
{
public:
    SharedPlayer Create(const std::string& name, uint8_t age) override;
    SharedPlayer CreateRandom() override;
};
