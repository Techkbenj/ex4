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
virtual ~BattleCard() override = default;

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
void encounter(Player& player) const override;

/*
 * Initiates an encounter with the card.
 * Allows for more specific functionalities.
 * @return 
 *      void
*/
virtual void encounter(Player& player, bool gangBattle, bool autoLoss = false) const;

/*
 * Returns the force of the card.
 * @return
 *      Force of card.
*/
int getForce() const;

/*
 * Returns the damage the card inflicts upon player loss.
 * @return
 *      Damage.
*/
int getDamage() const;

/*
 * Returns the amount of coins the card rewards the player.
 * @return
 *      Coins.
*/
int getCoins() const;

protected:
int m_force;
int m_lossDmg;
int m_coins;
};

#endif //EX4_BattleCard_H