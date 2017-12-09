#include "GoalkeeperFactory.h"
#include "../Players/Goalkeeper.h"

SharedPlayer GoalkeeperFactory::Create(const std::string& name, uint8_t age)
{
    return std::make_shared<Goalkeeper>(name, age);
}

SharedPlayer GoalkeeperFactory::CreateRandom()
{
    return std::make_shared<Goalkeeper>(GetUnickRandomName(), 16);
}
