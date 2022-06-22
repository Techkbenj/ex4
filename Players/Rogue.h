
#ifndef HW4_ROGUE_H
#define HW4_ROGUE_H

#include <iostream>
#include "Player.h"

class Rogue : public Player
{
public:
    /*
     * C'tor of Rogue class
     *
     * @param name - The name of the Rogue.
     * @return
     *      A new instance of Rogue.
    */
    Rogue(std::string name);

    /*
     * D'tor of Rogue Class
     */
    ~Rogue() = default;

    /*
    * Copy C'tor of Rogue class
    * @param rogue - The Rogue to copy the stats from.
    * @return 
    *      A new Rogue.
    */
    Rogue(const Rogue& rogue) = default;

    /*
     * Assignment operator of Rogue Class
     * 
     * @param rogue - The Rogue from which the assignment is coming
     * @return 
     *      The assigned Rogue
     */
    Rogue& operator=(const Rogue& rogue) = default;

    /*
     * Adds coins to the player.
     *
     * @param coins - The amount of coins to give to the player.
     * @return 
     *      void
     */
    void addCoins(int coins) override;

    /*
     * Prints the stats of a player.
     *
     * @param os - The chosen output stream
     * @return 
     *      The true if the player has won.
     */
    void printInfoOfPlayer(std::ostream& os) const override;
};

#endif //HW4_ROGUE_H
