#include "Factories/FieldplayerFactory.h"
#include "Team.h"
#include "Names.h"

Team::Team(const SharedFactory& factory)
        : m_Factory(factory)
{
    Generate();
}

void Team::Generate()
{
    for (size_t i = 0; i < 11; ++i)
    {
        uint8_t age = static_cast<uint8_t>(rand() % 20 + ageDefault);

        std::string name;

        while (true)
        {
            name = names::GetName();

            bool nameIsOk = true;
            for (const auto& player : *m_Team)
            {
                if (name == player->GetName())
                {
                    nameIsOk = false;
                    break;
                }
            }
            if (nameIsOk)
                break;
        }

        m_Team->push_back(m_Factory->Create(name, age));
    }
}

void Team::Print()
{
    for (auto player : * m_Team)
        player->Info();
}