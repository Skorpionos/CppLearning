#include "Test.h"

void Test()
{
    srand(static_cast<unsigned>(time(nullptr)));

    auto factory1 = std::make_shared<FieldplayerFactory>();
    Team team1(factory1);
    team1.Print();

    auto factory2 = std::make_shared<GoalkeeperFactory>();
    Team team2(factory1);
    team2.Print();
}