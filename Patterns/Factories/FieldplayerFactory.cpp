#include "FieldplayerFactory.h"
#include "../Players/FieldPlayer.h"

SharedPlayer FieldplayerFactory::Create(const std::string& name, uint16_t dateOfBirth)
{
    return std::make_shared<FieldPlayer>(name, dateOfBirth);
}