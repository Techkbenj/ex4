#include "Fairy.h"
#include "../Players/Wizard.h"

Fairy::Fairy() : Card("Fairy") {}

void Fairy::encounter(Player& player) const
{
    try
    {
        Wizard &tempWizard = dynamic_cast<Wizard &>(player);
        tempWizard.heal(10);
        printFairyMessage(true);
    }
    catch (std::bad_cast&)
    {
        printFairyMessage(false);
    }
}