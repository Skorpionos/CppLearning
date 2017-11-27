#pragma once

#include "Factories/PlayerFactory.h"

#include <vector>

typedef std::vector<SharedPlayer> TeamVector;

typedef std::shared_ptr<TeamVector> SharedTeamVector;

class Team
{
public:
    Team(const SharedFactory& factory);

    void Generate();
    void Print();

private:
    SharedTeamVector m_Team = std::make_shared<TeamVector>();
    SharedFactory m_Factory = nullptr;
};
