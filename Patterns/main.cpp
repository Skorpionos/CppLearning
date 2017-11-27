#include <vector>
#include "Players/FieldPlayer.h"
#include "Factories/FieldplayerFactory.h"
#include "Factories/GoalkeeperFactory.h"
#include "Team.h"

int main()
{
    srand(time(0));

    Team team1(std::make_shared<FieldplayerFactory>());
    Team team2(std::make_shared<GoalkeeperFactory>());

    team1.Print();
    team2.Print();

    return 0;
}




