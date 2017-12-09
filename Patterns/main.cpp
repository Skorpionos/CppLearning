#include "Factories/FieldplayerFactory.h"
#include "Factories/GoalkeeperFactory.h"
#include "Players/Team.h"

int main()
{
    srand(static_cast<unsigned>(time(nullptr)));

    auto factory1 = std::make_shared<FieldplayerFactory>();
    Team team1(factory1);
    team1.Print();

    auto factory2 = std::make_shared<GoalkeeperFactory>();
    Team team2(factory1);
    team2.Print();

    return 0;
}




