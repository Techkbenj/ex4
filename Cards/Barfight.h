#ifndef EX4_Barfight_H
#define EX4_Barfight_H

#include "Card.h"

class Barfight:: public Card
{
    public:
    /*
    * C'tor of Barfight class
    *
    * @return
    *      A new instance of a Barfight card.
    */
    Barfight();

    /*
     * D'tor of Goblin class
    */
    ~Barfight() = default override;

    /*
     * Initiates an encounter with the card.
     * @return 
     *      void
    */
    void encounter(Player& player) const override;
};


#endif //EX4_Barfight_H