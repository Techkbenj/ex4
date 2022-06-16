#include "Fighter.h"

Fighter::Fighter(std::string name) : Player(name, "Fighter") {}

int Fighter::getAttackStrength() const
{
    return m_level + (m_force*2);
}

void Fighter::printInfoOfPlayer(std::ostream& os) const
{
    printPlayerDetails(os, m_name, m_class, m_level, m_force, m_hp, m_coins);
}

