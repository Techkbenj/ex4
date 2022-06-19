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
    ~Goblin() override = default;
};

#endif //EX4_Goblin_H