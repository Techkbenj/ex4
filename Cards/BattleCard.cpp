#include "BattleCard.h"

BattleCard::BattleCard(std::string name, int force, int lossDmg, int coins) : 
    Card(name), m_force(force), m_lossDmg(lossDmg), m_coins(coins) {}

void BattleCard::printInfo(std::ostream& os) const
{
    printCardDetails(os, getName());
    printMonsterDetails(os, m_force, m_lossDmg, m_coins, false);
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
        enactLoss(player);
        printLossBattle(player.getName(), getName());
    }
}

int BattleCard::getForce() const
{
    return m_force;
}

int BattleCard::getDamage() const
{
    return m_lossDmg;
}

int BattleCard::getCoins() const
{
    return m_coins;
}

void BattleCard::enactLoss(Player& player) const
{
    player.damage(getDamage());
}


