#include "Pitfall.h"

Pitfall::Pitfall() : Card("Pitfall") {};

void Pitfall::encounter(Player& player) const
{
    if (player.getClass() != "Rogue")
    {
        player.damage(10);
    }
    printPitfallMessage(player.getClass() == "Rogue");
}