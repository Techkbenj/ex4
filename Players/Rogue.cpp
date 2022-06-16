
#include "Rogue.h"

Rogue::Rogue(std::string name) : Player(name, "Rogue") {}

void Rogue::addCoins(int coins)
{
    if (coins > 0)
    {
        m_coins += (2*coins);
    }
}

void Rogue::printInfoOfPlayer(std::ostream& os) const
{
    printPlayerDetails(os, m_name, m_class, m_level, m_force, m_hp, m_coins);
}
