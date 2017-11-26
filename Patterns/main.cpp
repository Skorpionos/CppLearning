#include <vector>
#include "Players/FieldPlayer.h"
#include "Factories/FieldplayerFactory.h"
#include "Factories/GoalkeeperFactory.h"

int main()
{

    std::vector<SharedFactory> factories = {std::make_shared<FieldplayerFactory>(),
                                            std::make_shared<GoalkeeperFactory>()};

    size_t i = 1980;
    for (auto factory : factories)
    {
        auto player = factory->Create("", i++);
        player->Info();
    }

    return 0;
}



