#ifndef EX4_Treasure_H
#define EX4_Treasure_H

#include "Card.h"

class Treasure : public Card
{
    public:
    /*
    * C'tor of Treasure class
    *
    * @return
    *      A new instance of a Treasure card.
    */
    Treasure();

    /*
     * D'tor of Goblin class
    */
    ~Treasure() override = default;

    /*
     * Initiates an encounter with the card.
     * @return 
     *      void
    */
    void encounter(Player& player) const override;
};


#endif //EX4_Treasure_H