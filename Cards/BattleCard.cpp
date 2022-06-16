#include "BattleCard.h"

BattleCard::BattleCard(std::string name, int force, int lossDmg, int coins) : 
    Card(name), m_force(force), m_lossDmg(lossDmg), m_coins(coins) {}

void BattleCard::printInfo(std::ostream& os) const
{
    printCardDetails(os, getName());
    printMonsterDetails(os, DEFAULT_FORCE, DEFAULT_DAMAGE, DEFAULT_COINS, true);
    printEndOfCardDetails(os);
}

void BattleCard::encounter(Player& player) const
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

const int BattleCard::getForce() const
{
    return m_force;
}

const int BattleCard::getDamage() const
{
    return m_lossDmg;
}

const int BattleCard::getCoins() const
{
    return m_coins;
}


