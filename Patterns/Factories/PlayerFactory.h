#pragma once

#include "../Players/Player.h"
#include "../Players/PersonNames.h"

#include <vector>

class PlayerFactory
{
public:
    virtual ~PlayerFactory() = default;
    virtual SharedPlayer Create(const std::string& name, uint8_t age) { };
    virtual SharedPlayer CreateRandom() { };

protected:
    std::string GetUnickRandomName();

    uint8_t GetRandomAge(uint8_t upLimit) const;

private:
    std::vector<std::string> m_usedNames;
};

typedef std::shared_ptr<PlayerFactory> SharedFactory;