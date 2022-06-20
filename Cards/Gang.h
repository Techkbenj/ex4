#ifndef EX4_Gang_H
#define EX4_Gang_H

#include "BattleCard.h"
#include <memory>
#include <vector>

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
    void encounter(Player& player) const override;

    /*
     * Inserts a card into the gang.
     * @return 
     *      void
    */
    void insertCard(std::unique_ptr<BattleCard> card);

    private:
    std::vector<std::unique_ptr<BattleCard>> m_gangCards;
};


#endif //EX4_Gang_H