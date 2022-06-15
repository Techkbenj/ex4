#include "Card.h"

Card::Card(std::string name) : m_name(name) {}

std::ostream& operator<<(std::ostream& os, const Card& card)
{
    card.printInfo(os);
    return os;
}