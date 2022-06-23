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
    ~Vampire() = default;

    /*
     *  Copy C'tor of Vampire class
     *
     * @param vampire - The Vampire to copy.
     * @return
     *      A new instance of Vampire.
    */
    Vampire(const Vampire& vampire) = default;

    /*
     * Assignment operator of Vampire Class
     * 
     * @param vampire - The Vampire from which the assignment is coming
     * @return 
     *      The assigned Vampire
     */
    Vampire& operator=(const Vampire& vampire) = default;

    /*
    * Applies the loss according to the card conditions.
    * @return 
    *      void
    */
    void enactLoss(Player& player) const override;
};

#endif //EX4_Goblin_H