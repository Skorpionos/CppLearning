#pragma once

#include "../Factories/PlayerFactory.h"

#include <vector>

typedef std::vector<SharedPlayer> TeamVector;

typedef std::shared_ptr<TeamVector> SharedTeamVector;

class Team
{
public:
    explicit Team(const SharedFactory& factory);

    void GenerateRandomPlayers();
    void Print();

private:
    SharedTeamVector m_team = std::make_shared<TeamVector>();
    SharedFactory m_Factory = nullptr;
    uint8_t getRandom(uint8_t upLimit) const;
};
