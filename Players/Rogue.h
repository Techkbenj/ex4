
#ifndef HW4_ROGUE_H
#define HW4_ROGUE_H

#include <iostream>
#include "Player.h"

class Rogue : public Player
{
public:
    Rogue(std::string name) : Player(name) {}
    void addCoins(int coins) override;

    void printInfoOfPlayer(std::ostream& os) const override;
};

#endif //HW4_ROGUE_H
