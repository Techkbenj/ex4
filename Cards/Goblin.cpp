#include "Goblin.h"
#include "utilities.h"

int const DEFAULT_FORCE = 6;
int const DEFAULT_DAMAGE = 10;
int const DEFAULT_COINS = 2;

Goblin::Goblin(): BattleCard("Goblin", DEFAULT_FORCE, DEFAULT_DAMAGE, DEFAULT_COINS) {};

void Goblin::printInfo(std::ostream& os) const
{
    printMonsterDetails(os, DEFAULT_FORCE, DEFAULT_DAMAGE, DEFAULT_COINS);
}
