#include "Gang.h"

Gang::Gang() : Card("Gang") {}

void Gang::encounter(Player& player) const
{
    int initialHp = player.getHp();
    for (std::unique_ptr<BattleCard> card : m_cards)
    {
        if(player.getHp() == initialHp)
        {
            card->encounter(player, true);
        }
        else
        {
            card->encounter(player, true, true);
        }
    }
    if (player.getHp() == initialHp)
    {
        player.levelUp();
        printWinBattle(player.getName(), getName());
    }
}

void insertCard(std::unique_ptr<BattleCard> card)
{
    m_gangCards.push_back(card);
}
