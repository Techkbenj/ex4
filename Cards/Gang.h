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
    ~Gang() = default;

    /*
     *  Copy C'tor of Gang class
     *
     * @param gang - The Gang to copy.
     * @return
     *      A new instance of Gang.
    */
    Gang(const Gang& gang) = default;

    /*
     * Assignment operator of Gang Class
     * 
     * @param gang - The Gang from which the assignment is coming
     * @return 
     *      The assigned Gang
     */
    Gang& operator=(const Gang& gang) = default;

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
    void insertCard(std::string nameOfCard);

    private:
    std::vector<std::unique_ptr<BattleCard>> m_gangCards;
};


#endif //EX4_Gang_H