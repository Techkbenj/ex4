#include "Fairy.h"

Fairy::Fairy() : Card("Fairy") {};

void Fairy::encounter(Player& player) const
{
    if (player.getClass() == "Wizard")
    {
        player.heal(10);
    }
    printFairyMessage(player.getClass() == "Wizard");
}