#include "Vampire.h"

int const DEFAULT_FORCE = 10;
int const DEFAULT_DAMAGE = 10;
int const DEFAULT_COINS = 2;
const int VAMPIRE_LOSS_FORCE = -1;

Vampire::Vampire(): BattleCard("Vampire", DEFAULT_FORCE, DEFAULT_DAMAGE, DEFAULT_COINS) {}

void Vampire::enactLoss(Player& player) const
{
    player.damage(getDamage());
    player.buff(VAMPIRE_LOSS_FORCE);
}

