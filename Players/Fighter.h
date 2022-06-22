
#ifndef HW4_FIGHTER_H
#define HW4_FIGHTER_H

#include <iostream>
#include "Player.h"

class Fighter : public Player
{
public:
    /*
     * C'tor of Fighter class
     *
     * @param name - The name of the fighter.
     * @return
     *      A new instance of Fighter.
    */
    Fighter(std::string name);

    /*
     * D'tor of Fighter Class
     */
    ~Fighter() = default;

    /*
    * Copy C'tor of Fighter class
    * @param fighter - The fighter to copy the stats from.
    * @return 
    *      A new Fighter.
    */
    Fighter(const Fighter& fighter) = default;

    /*
     * Assignment operator of Fighter Class
     * 
     * @param fighter - The Fighter from which the assignment is coming
     * @return 
     *      The assigned Fighter 
     */
    Fighter& operator=(const Fighter& fighter) = default;

    /*
     * Returns the attack strength of a fighter.
     * The attack strength is the sum of the fighter's level and force.
     *
     * @return 
     *      The attack strength of the player.
     */
    int getAttackStrength() const override;
    
    /*
     * Prints the stats of a player.
     *
     * @param os - The chosen output stream
     * @return 
     *      The true if the player has won.
     */
    void printInfoOfPlayer(std::ostream& os) const override;

};


#endif //HW4_FIGHTER_H
