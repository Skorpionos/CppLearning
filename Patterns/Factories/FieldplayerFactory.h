#pragma once

#include "PlayerFactory.h"

#include <vector>

class FieldplayerFactory : public PlayerFactory
{
public:
    SharedPlayer Create(const std::string& name, uint8_t age) override;
    SharedPlayer CreateRandom() override;
};

