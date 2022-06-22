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
     * D'tor of Merchant class
    */
    ~Merchant()  = default;

    /*
     *  Copy C'tor of Merchant class
     *
     * @param merchant - The Merchant to copy.
     * @return
     *      A new instance of Merchant.
    */
    Merchant(const Merchant& merchant) = default;

    /*
     * Assignment operator of Merchant Class
     * 
     * @param merchant - The Merchant from which the assignment is coming
     * @return 
     *      The assigned Merchant
     */
    Merchant& operator=(const Merchant& merchant) = default;

    /*
     * Initiates an encounter with the card.
     * @return 
     *      void
    */
    void encounter(Player& player) const override;
};


#endif //EX4_Merchant_H