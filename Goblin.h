#ifndef EX4_Goblin_H
#define EX4_Goblin_H

#include "BattleCard.h"

class Goblin : public BattleCard
{
    public:
    /*
    * C'tor of Goblin class
    *
    * @return
    *      A new instance of a Goblin card.
    */
    Goblin();

    /*
     * D'tor of Goblin class
    */
    ~Goblin() = default override;

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