#include "PlayerFactory.h"

#include <algorithm>

std::string PlayerFactory::GetUnickRandomName()
{
    std::string name;

    while (true)
    {
        name = persons::GetRandomFullName();

        if (std::count(m_usedNames.begin(), m_usedNames.end(), name) == 0)
            break;
    }

    m_usedNames.push_back(name);
    return name;
}
uint8_t PlayerFactory::GetRandomAge(uint8_t upLimit) const
{
    const auto i = static_cast<uint8_t>(rand() % upLimit);
    return i;
}
