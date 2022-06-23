#include "Dragon.h"

int const INFINITE = 999;
int const DEFAULT_FORCE = 25;
int const DEFAULT_DAMAGE = INFINITE;
int const DEFAULT_COINS = 1000;

Dragon::Dragon() : BattleCard("Dragon", DEFAULT_FORCE, DEFAULT_DAMAGE, DEFAULT_COINS) {}

void Dragon::printInfo(std::ostream& os) const
{
    printCardDetails(os, m_name);
    printMonsterDetails(os, m_force, m_lossDmg, m_coins, true);
    printEndOfCardDetails(os);
}

void Dragon::enactLoss(Player& player) const
{
    player.damage(player.getHp());
}