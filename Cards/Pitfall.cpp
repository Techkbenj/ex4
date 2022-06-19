#include "Pitfall.h"
#include "../Players/Rogue.h"

Pitfall::Pitfall() : Card("Pitfall") {}

void Pitfall::encounter(Player& player) const
{
    try
    {
        Rogue &tempRogue = dynamic_cast<Rogue &>(player);
        tempRogue.damage(0);
        printPitfallMessage(true);
    }
    catch (std::bad_cast&)
    {
        player.damage(10);
        printPitfallMessage(false);
    }
}