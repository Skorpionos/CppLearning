#include "GoalkeeperFactory.h"
#include "../Players/Goalkeeper.h"

SharedPlayer GoalkeeperFactory::Create(const std::string& name, uint16_t dateOfBirth)
{
    return std::make_shared<Goalkeeper>(name, dateOfBirth);
}
