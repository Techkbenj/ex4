#include "Barfight.h"
#include "../Players/Fighter.h"

Barfight::Barfight() : Card("Barfight") {}

void Barfight::encounter(Player& player) const
{
    try
    {
        Fighter &tempRogue = dynamic_cast<Fighter &>(player);
        tempRogue.damage(0);
        printBarfightMessage(true);
    }
    catch (std::bad_cast&)
    {
        player.damage(10);
        printBarfightMessage(false);
    }
}