#include "Dragon.h"
#include "utilities.h"

int const INFINITE = 999;
int const DEFAULT_FORCE = 25;
int const DEFAULT_DAMAGE = INFINITE;
int const DEFAULT_COINS = 1000;

Goblin::Goblin(): BattleCard("Dragon", DEFAULT_FORCE, DEFAULT_DAMAGE, DEFAULT_COINS) {};

void Goblin::printInfo(std::ostream& os) const
{
    printMonsterDetails(os, DEFAULT_FORCE, DEFAULT_DAMAGE, DEFAULT_COINS, true);
}
