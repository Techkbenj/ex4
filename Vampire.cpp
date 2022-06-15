#include "Vampire.h"
#include "utilities.h"

int const DEFAULT_FORCE = 10;
int const DEFAULT_DAMAGE = 10;
int const DEFAULT_COINS = 2;

Goblin::Goblin(): BattleCard("Vampire", DEFAULT_FORCE, DEFAULT_DAMAGE, DEFAULT_COINS) {};

void Goblin::printInfo(std::ostream& os) const
{
    printMonsterDetails(os, DEFAULT_FORCE, DEFAULT_DAMAGE, DEFAULT_COINS);
}
