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

/*
 * Prints the card info.
 *
 * @return
 *      void
*/
void printInfo(std::ostream& os) const override;

/*
 * Initiates an encounter with the card.
 * @return 
 *      void
*/
virtual void encounter(Player& player) const override;

/*
 * Returns the force of the card.
 * @return
 *      Force of card.
*/
const int getForce() const;

/*
 * Returns the damage the card inflicts upon player loss.
 * @return
 *      Damage.
*/
const int getDamage() const;

/*
 * Returns the amount of coins the card rewards the player.
 * @return
 *      Coins.
*/
const int getCoins() const;

protected:
m_force;
m_lossDmg;
m_coins;
};

#endif //EX4_BattleCard_H