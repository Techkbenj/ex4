
#ifndef HW4_FIGHTER_H
#define HW4_FIGHTER_H

#include <iostream>
#include "Player.h"

class Fighter : public Player
{
public:
    Fighter(std::string name);
    int getAttackStrength() const override;

    void printInfoOfPlayer(std::ostream& os) const override;

};


#endif //HW4_FIGHTER_H
