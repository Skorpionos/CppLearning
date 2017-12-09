#include "FieldplayerFactory.h"
#include "../Players/FieldPlayer.h"

SharedPlayer FieldplayerFactory::Create(const std::string& name, uint8_t age)
{
    return std::make_shared<FieldPlayer>(name, age);
}

SharedPlayer FieldplayerFactory::CreateRandom()
{
    const auto age = YoungPlayerAge + GetRandomAge(CareerPeriod);

    return std::make_shared<FieldPlayer>(GetUnickRandomName(), age);
}
