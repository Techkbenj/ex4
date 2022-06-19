#ifndef EX4_Gang_H
#define EX4_Gang_H

#include "Card.h"

class Gang : public Card
{
    public:
    /*
    * C'tor of Gang class
    *
    * @return
    *      A new instance of a Gang card.
    */
    Gang();

    /*
     * D'tor of Gang class
    */
    ~Gang() override = default;

    /*
     * Initiates an encounter with the card.
     * @return 
     *      void
    */
    void encounter(Player& player, bool gangBattle = false, bool autoLoss = false) const override;

    /*
     * Inserts a card into the gang.
     * @return 
     *      void
    */
    void insertCard(Card* card);

    private:
    std::vector<std::unique_ptr<Card>> m_cards;
};


#endif //EX4_Gang_H