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
    ~Goblin()  = default;

    /*
     *  Copy C'tor of Goblin class
     *
     * @param goblin - The Goblin to copy.
     * @return
     *      A new instance of Goblin.
    */
    Goblin(const Goblin& goblin) = default;

    /*
     * Assignment operator of Goblin Class
     * 
     * @param goblin - The Goblin from which the assignment is coming
     * @return 
     *      The assigned Goblin
     */
    Goblin& operator=(const Goblin& goblin) = default;
};

#endif //EX4_Goblin_H