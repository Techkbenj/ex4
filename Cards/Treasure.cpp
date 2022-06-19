#include "Treasure.h"

Treasure::Treasure() : Card("Treasure") {}

void Treasure::encounter(Player& player) const
{
    player.addCoins(10);
    printTreasureMessage();
}