#include "BattleCard.h"

class Goblin : public BattleCard
{
    public:
    /*
    * C'tor of Goblin class
    *
    * @param name - The name of the card.
    * @param force - The force of the card.
    * @param lossDmg - The damage the card inflicts on the player upon player loss.
    * @param coins - The amount of coins the card rewards the player upon player win.
    * @return
    *      A new instance of a Goblin card.
    */
    Goblin(string name, int force, int lossDmg, int coins);

    /*
     * D'tor of Goblin class
    */
    ~Goblin() = default;

    /*
     * Initiates an encounter with the card.
     * @return 
     *      void
    */
    void encounter() const;
}