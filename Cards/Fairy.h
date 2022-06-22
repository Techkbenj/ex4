#ifndef EX4_Fairy_H
#define EX4_Fairy_H

#include "Card.h"

class Fairy : public Card
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
     * D'tor of Fairy class
    */
    ~Fairy() = default;

    /*
     *  Copy C'tor of Fairy class
     *
     * @param fairy - The Fairy to copy.
     * @return
     *      A new instance of Fairy.
    */
    Fairy(const Fairy& fairy) = default;

    /*
     * Assignment operator of Fairy Class
     * 
     * @param fairy - The Fairy from which the assignment is coming
     * @return 
     *      The assigned Fairy
     */
    Fairy& operator=(const Fairy& fairy) = default;

    /*
     * Initiates an encounter with the card.
     * @return 
     *      void
    */
    void encounter(Player& player) const override;
};


#endif //EX4_Fairy_H