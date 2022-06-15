#ifndef EX4_Vampire_H
#define EX4_Vampire_H

#include "BattleCard.h"

class Vampire : public BattleCard
{
    public:
    /*
    * C'tor of Vampire class
    *
    * @return
    *      A new instance of a Vampire card.
    */
    Vampire();

    /*
     * D'tor of Vampire class
    */
    ~Vampire() = default override;

    /*
     * Prints the card info.
     *
     * @return
     *      void
    */
    void printInfo(std::ostream& os) const override;

    /*
     * Initiates an encounter with the card.
     * @return 
     *      void
    */
    void encounter(Player& player) const override;
}

#endif //EX4_Goblin_H