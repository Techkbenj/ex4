#include "Fairy.h"
#include "../Players/Wizard.h"

Fairy::Fairy() : Card("Fairy") {}

void Fairy::encounter(Player& player) const
{
    try
    {
        Wizard &tempRogue = dynamic_cast<Wizard &>(player);
        tempRogue.heal(10);
        printFairyMessage(true);
    }
    catch (std::bad_cast&)
    {
        printFairyMessage(false);
    }
}