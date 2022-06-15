#ifndef EX4_BattleCard_H
#define EX4_BattleCard_H

#include "Card.h"

class BattleCard : public Card {
public:
/*
 * C'tor of Card class
 *
 * @param name - The name of the card.
 * @param force - The force of the card.
 * @param lossDmg - The damage the card inflicts on the player upon player loss.
 * @param coins - The amount of coins the card rewards the player upon player win.
 * @return
 *      A new instance of BattleCard.
*/
BattleCard(std::string name, int force, int lossDmg, int coins);

/*
 * D'tor of BattleCard class
*/
virtual ~BattleCard() = default override;

private:
m_force;
m_lossDmg;
m_coins;
};

#endif //EX4_BattleCard_H