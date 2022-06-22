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
     * D'tor of Treasure class
    */
    ~Treasure() = default;

    /*
     *  Copy C'tor of Treasure class
     *
     * @param treasure - The Treasure to copy.
     * @return
     *      A new instance of Treasure.
    */
    Treasure(const Treasure& treasure) = default;

    /*
     * Assignment operator of Treasure Class
     * 
     * @param treasure - The Treasure from which the assignment is coming
     * @return 
     *      The assigned Treasure
     */
    Treasure& operator=(const Treasure& treasure) = default;

    /*
     * Initiates an encounter with the card.
     * @return 
     *      void
    */
    void encounter(Player& player) const override;
};


#endif //EX4_Treasure_H