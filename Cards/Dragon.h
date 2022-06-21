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
    ~Dragon() override = default;

    /*
     * Prints the card info.
     *
     * @return
     *      void
    */
    void printInfo(std::ostream& os) const override;

    /*
    * Initiates an encounter with the card.
    * Allows for more specific functionalities.
    * @return 
    *      void
    */
    void encounter(Player& player) const override;
};

#endif //EX4_Goblin_H