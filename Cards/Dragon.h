#ifndef EX4_Dragon_H
#define EX4_Dragon_H

#include "BattleCard.h"

class Dragon : public BattleCard
{
    public:
    /*
    * C'tor of Dragon class
    *
    * @return
    *      A new instance of a Dragon card.
    */
    Dragon();

    /*
     * D'tor of Dragon class
    */
    ~Dragon() = default;

    /*
     *  Copy C'tor of Dragon class
     *
     * @param dragon - The Dragon to copy.
     * @return
     *      A new instance of Dragon.
    */
    Dragon(const Dragon& dragon) = default;

    /*
     * Assignment operator of Dragon Class
     * 
     * @param dragon - The Dragon from which the assignment is coming
     * @return 
     *      The assigned Dragon
     */
    Dragon& operator=(const Dragon& dragon) = default;

    /*
     * Prints the card info.
     *
     * @return
     *      void
    */
    void printInfo(std::ostream& os) const override;

    /*
    * Applies the loss according to the card conditions.
    * @return 
    *      void
    */
    void enactLoss(Player& player) const override;
};

#endif //EX4_Goblin_H