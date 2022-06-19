
#include "Wizard.h"
#include "../utilities.h"

Wizard::Wizard(std::string name) : Player(name) {}

void Wizard::heal(int health)
{
    if(health > 0)
    {
        m_hp += (2*health);
    }
    if (m_hp > m_maxHp)
    {
        m_hp = m_maxHp;
    }
}

void Wizard::printInfoOfPlayer(std::ostream& os) const
{
    printPlayerDetails(os, m_name, "Wizard", m_level, m_force, m_hp, m_coins);
}

