#ifndef EX4_Barfight_H
#define EX4_Barfight_H

#include "Card.h"

class Barfight : public Card
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
     * D'tor of Barfight class
    */
    ~Barfight() = default;

    /*
     *  Copy C'tor of Barfight class
     *
     * @param barfight - The Barfight to copy.
     * @return
     *      A new instance of Barfight.
    */
    Barfight(const Barfight& barfight) = default;

    /*
     * Assignment operator of Barfight Class
     * 
     * @param barfight - The Barfight from which the assignment is coming
     * @return 
     *      The assigned Barfight
     */
    Barfight& operator=(const Barfight& barfight) = default;

    /*
     * Initiates an encounter with the card.
     * @return 
     *      void
    */
    void encounter(Player& player) const override;
};


#endif //EX4_Barfight_H