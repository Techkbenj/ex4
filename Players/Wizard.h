
#ifndef HW4_WIZARD_H
#define HW4_WIZARD_H

#include <iostream>
#include "Player.h"

class Wizard : public Player
{
public:
    Wizard(std::string name);
    void heal(int health) override;

    void printInfoOfPlayer(std::ostream& os) const override;
};


#endif //HW4_WIZARD_H
