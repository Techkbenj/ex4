#include "Barfight.h"
#include "../Players/Fighter.h"

Barfight::Barfight() : Card("Barfight") {}

void Barfight::encounter(Player& player) const
{
    try
    {
        Fighter &tempFighter = dynamic_cast<Fighter &>(player);
        tempFighter.damage(0);
        printBarfightMessage(true);
    }
    catch (std::bad_cast&)
    {
        player.damage(10);
        printBarfightMessage(false);
    }
}