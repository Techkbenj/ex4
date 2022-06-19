#ifndef EX4_Pitfall_H
#define EX4_Pitfall_H

#include "Card.h"

class Pitfall : public Card
{
    public:
    /*
    * C'tor of Pitfall class
    *
    * @return
    *      A new instance of a Pitfall card.
    */
    Pitfall();

    /*
     * D'tor of Goblin class
    */
    ~Pitfall() override = default;

    /*
     * Initiates an encounter with the card.
     * @return 
     *      void
    */
    void encounter(Player& player) const override;
};


#endif //EX4_Pitfall_H