#include "Card.h"

Card::Card(std::string name) : m_name(name) {}

std::ostream& operator<<(std::ostream& os, const Card& card)
{
    card.printInfo(os);
    return os;
}

const std::string Card::getName() const
{
    return m_name;
}
