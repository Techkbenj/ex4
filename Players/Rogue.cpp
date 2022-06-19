
#include "Rogue.h"
#include "../utilities.h"

Rogue::Rogue(std::string name) : Player(name) {}

void Rogue::addCoins(int coins)
{
    if (coins > 0)
    {
        m_coins += (2*coins);
    }
}

void Rogue::printInfoOfPlayer(std::ostream& os) const
{
    printPlayerDetails(os, m_name, "Rogue", m_level, m_force, m_hp, m_coins);
}
