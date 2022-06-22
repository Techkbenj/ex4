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
     * D'tor of Pitfall class
    */
    ~Pitfall() = default;

    /*
     *  Copy C'tor of Pitfall class
     *
     * @param pitfall - The Pitfall to copy.
     * @return
     *      A new instance of Pitfall.
    */
    Pitfall(const Pitfall& pitfall) = default;

    /*
     * Assignment operator of Pitfall Class
     * 
     * @param Pitfall - The Pitfall from which the assignment is coming
     * @return 
     *      The assigned Pitfall
     */
    Pitfall& operator=(const Pitfall& pitfall) = default;

    /*
     * Initiates an encounter with the card.
     * @return 
     *      void
    */
    void encounter(Player& player) const override;
};


#endif //EX4_Pitfall_H