#include "Dragon.h"

int const INFINITE = 999;
int const DEFAULT_FORCE = 25;
int const DEFAULT_DAMAGE = INFINITE;
int const DEFAULT_COINS = 1000;

Dragon::Dragon(): BattleCard("Dragon", DEFAULT_FORCE, DEFAULT_DAMAGE, DEFAULT_COINS) {};

void Dragon::printInfo(std::ostream& os) const
{
    printMonsterDetails(os, DEFAULT_FORCE, DEFAULT_DAMAGE, DEFAULT_COINS, true);
}

void Dragon::encounter(Player& player) const
{
    if(player.getAttackStrength() >= getForce())
    {
        player.levelUp();
        player.addCoins(getCoins());
        printWinBattle(player.getName(), getName());
    }
    else
    {
        player.damage(getDamage());
        printLossBattle(player.getName(), getName())
    }
}