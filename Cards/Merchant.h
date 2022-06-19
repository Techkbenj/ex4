#ifndef EX4_Merchant_H
#define EX4_Merchant_H

#include "Card.h"

class Merchant : public Card
{
    public:
    /*
    * C'tor of Merchant class
    *
    * @return
    *      A new instance of a Merchant card.
    */
    Merchant();

    /*
     * D'tor of Goblin class
    */
    ~Merchant() override = default;

    /*
     * Initiates an encounter with the card.
     * @return 
     *      void
    */
    void encounter(Player& player) const override;
};


#endif //EX4_Merchant_H