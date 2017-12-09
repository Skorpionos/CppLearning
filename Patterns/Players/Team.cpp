#include "../Factories/FieldplayerFactory.h"
#include "Team.h"

Team::Team(const SharedFactory& factory)
        : m_Factory(factory)
{
    GenerateRandomPlayers();
}

void Team::GenerateRandomPlayers()
{
    for (size_t i = 0; i < 11; ++i)
        m_team->push_back(m_Factory->CreateRandom());

    // TODO: sort by name
}

void Team::Print()
{
    for (const auto& player : * m_team)

        player->Info();
}

