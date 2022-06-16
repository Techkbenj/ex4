#ifndef EX4_Fairy_H
#define EX4_Fairy_H

#include "Card.h"

class Fairy:: public Card
{
    public:
    /*
    * C'tor of Fairy class
    *
    * @return
    *      A new instance of a Fairy card.
    */
    Fairy();

    /*
     * D'tor of Goblin class
    */
    ~Fairy() = default override;

    /*
     * Initiates an encounter with the card.
     * @return 
     *      void
    */
    void encounter(Player& player) const override;
};


#endif //EX4_Fairy_H