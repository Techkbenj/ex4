#include "Gang.h"
#include "Vampire.h"
#include "Dragon.h"
#include "Goblin.h"

Gang::Gang() : Card("Gang"){}

void Gang::encounter(Player& player) const
{
    bool autoLoss = false;
    for (unsigned int i = 0; i < m_gangCards.size(); i++)
    {
        if(player.getAttackStrength() >= m_gangCards[i]->getForce() && (autoLoss == false))
        {
            player.addCoins(m_gangCards[i]->getCoins());
        }
        else
        {
            autoLoss = true;
            player.damage(m_gangCards[i]->getDamage());
            printLossBattle(player.getName(), m_gangCards[i]->getName());
        }     
    }
    if (!autoLoss)
        {
            player.levelUp();
            printWinBattle(player.getName(), getName());
        }
}

void  Gang::insertCard(std::string nameOfCard)
{
    if (nameOfCard == "Goblin")
    {
        m_gangCards.push_back(std::unique_ptr<BattleCard>(new Goblin()));
        return;
    }
    if (nameOfCard == "Vampire")
    {
        m_gangCards.push_back(std::unique_ptr<BattleCard>(new Vampire()));
        return;
    }
    if (nameOfCard == "Dragon")
    {
        m_gangCards.push_back(std::unique_ptr<BattleCard>(new Dragon()));
        return;
    } 
}
