#include "Barfight.h"

Barfight::Barfight() : Card("Barfight") {};

void Barfight::encounter(Player& player) const
{
    if (player.getClass() != "Fighter")
    {
        player.damage(10);
    }
    printBarfightMessage(player.getClass() == "Fighter");
}