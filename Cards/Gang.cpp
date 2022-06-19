#include "Gang.h"

Gang::Gang() : Card("Gang") {}

void Gang::encounter(Player& player) const
{
    int initialHp = player.getHp();
    for (Card* card : m_cards)
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

void insertCard(Card* card)
{
    m_cards.push_back(card);
}
