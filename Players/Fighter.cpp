#include "Fighter.h"
#include "../utilities.h"

Fighter::Fighter(std::string name) : Player(name) {}

int Fighter::getAttackStrength() const
{
    return m_level + (m_force*2);
}

void Fighter::printInfoOfPlayer(std::ostream& os) const
{
    printPlayerDetails(os, m_name, "Fighter", m_level, m_force, m_hp, m_coins);
}

