#include "Vampire.h"

int const DEFAULT_FORCE = 10;
int const DEFAULT_DAMAGE = 10;
int const DEFAULT_COINS = 2;
const int VAMPIRE_LOSS_FORCE = -1;

Vampire::Vampire(): BattleCard("Vampire", DEFAULT_FORCE, DEFAULT_DAMAGE, DEFAULT_COINS) {}


void Vampire::encounter(Player& player, bool gangBattle, bool autoLoss) const
{
    if(player.getAttackStrength() >= getForce() && gangBattle == false)
    {
        player.levelUp();
        player.addCoins(getCoins());
        printWinBattle(player.getName(), getName());
    }
    else if(player.getAttackStrength() >= getForce() && gangBattle == true && autoLoss == false)
    {
        player.addCoins(getCoins());
    }
    else
    {
        player.damage(getDamage());
        player.buff(VAMPIRE_LOSS_FORCE);
        printLossBattle(player.getName(), getName());
    }
}

