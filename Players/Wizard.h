
#ifndef HW4_WIZARD_H
#define HW4_WIZARD_H

#include <iostream>
#include "Player.h"

class Wizard : public Player
{
public:
    /*
     * C'tor of Wizard class
     *
     * @param name - The name of the Wizard.
     * @return
     *      A new instance of Wizard.
    */
    Wizard(std::string name);

    /*
     * D'tor of Wizard Class
     */
    ~Wizard() = default;

    /*
    * Copy C'tor of Wizard class
    * @param wizard - The Wizard to copy the stats from.
    * @return 
    *      A new Wizard.
    */
    Wizard(const Wizard& wizard) = default;

    /*
     * Assignment operator of Wizard Class
     * 
     * @param wizard - The Wizard from which the assignment is coming
     * @return 
     *      The assigned Wizard
     */
    Wizard& operator=(const Wizard& wizard) = default;

    /*
     * Heals the player by the amount of given health points.
     *
     * @param health - Amount of health points to heal the player with.
     * @return 
     *      void
     */
    void heal(int health) override;

    /*
     * Prints the stats of a player.
     *
     * @param os - The chosen output stream
     * @return 
     *      The true if the player has won.
     */
    void printInfoOfPlayer(std::ostream& os) const override;
};


#endif //HW4_WIZARD_H
