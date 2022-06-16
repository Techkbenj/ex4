
#ifndef CPP_UTIL_H
#define CPP_UTIL_H

#include <iostream>
#include <cstring>
#include <sstream>
#include <functional>

//#include "Exception.h"
#include "Players/Player.h"


/* ---------------------------------------------------------------------------------------------- */
// ----------------       Print functions for Player class          -----------------------

/*
 * Prints the details of the player:
 * Tip : Needed for the leaderBoard method (adjusted to print after the ranking section). 

 * @param os - The ostream.
 * @param name - The name of the player.
 * @param job - The job class of the player.
 * @param level - The player's level.
 * @param force - The player's force.
 * @param hp - The player's HP points.
 * @param coins - The player's amount of coins.
 * @return
 *      void
 */
void printPlayerDetails(std::ostream &os, const std::string &name, const std::string &job, int level, int force, int HP, int coins);

/* ---------------------------------------------------------------------------------------------- */
// ----------------------------        Print functions for Card class         --------------------------

/*
 * Prints the details of a general card:

 * @param os - The ostream.
 * @param name - The name of the card.
 * @return
 *      void
 */

void printCardDetails(std::ostream &os, const std::string &name);

/*
 * Prints the final line that seperates messages:

 * @param os - The ostream.
 * @return
 *      void
 */
void printEndOfCardDetails(std::ostream &os);
/*
 * Prints the details of a merchant card:
 
 * @param os - The ostream.
 * @param playerName - The name of the player who encountered the merchant.
 * @param coins - The player's amount of coins.
 * @return
 *      void
 */
void printMerchantInitialMessageForInteractiveEncounter(std::ostream &os, const std::string &playerName, int coins);

/*
 * Prints a message informing the player that he has an insufficient coins for this purchase.
 
 * @param os - The ostream.
 * @return
 *      void
 */
void printMerchantInsufficientCoins(std::ostream &os);

/*
 * Prints the details of a monster card:

 * @param os - The ostream.
 * @param force - The monster's force.
 * @param damage - The monster's damage.
 * @param coins - The monster's loot.
 * @return
 *      void
 */
void printMonsterDetails(std::ostream &os, int force, int damage, int coins, bool isDragon = false);

/*
 * Prints outcome summary of encountering the BarFight card:
 
 * @param isFighter - Indicates weither the player who encountered this card is a Fighter or not.
 * @return
 *      void
 *
 */
void printBarfightMessage(bool isFighter);

/*
 * Prints outcome summary of encountering the Fairy card:
 
 * @param isWizard - Indicates weither the player who encountered this card is a Wizard or not.
 * @return
 *      void
 *
 */
void printFairyMessage(bool isWizard);

/*
 * Prints outcome summary of encountering the PitFall card:
 
 * @param isRogue - Indicates weither the player who encountered this card is a Rogue or not.
 * @return
 *      void
 *
 */
void printPitfallMessage(bool isRogue);

/*
 * Prints outcome summary of encountering the Treasure card:
 
 * @return
 *      void
 *
 */
void printTreasureMessage();

/*
 * Prints outcome summary of encountering the Merchant card:
 
 * @param os - The ostream.
 * @param playerName - The name of the player who encountered the merchant.
 * @param type - The type of purchase the player has made (1 for potion / 2 for boost).
 * @param amount - The amount that the player has purchased.
 * @param cost - The total cost that the player has payed.
 * @return
 *      void
 *
 */
void printMerchantSummary(std::ostream &os, const std::string &playerName, int type, int cost);

/* ---------------------------------------------------------------------------------------------- */
// ----------------       Print functions for Mtmchkin class          -----------------------

/*
 * Prints info indicating the start of the game:
 
 * @return
 *      void
 */
void printStartGameMessage();

/*
 * Prints the details of a merchant card:

 * @return
 *      void
 */
void printInsertPlayerMessage();

/*
 * Prints a message when entering an invalid Class name:

 * @return
 *      void
 */
void printInvalidClass();

/*
 * Prints a message when entering an invalid player name:

 * @return
 *      void
 */
void printInvalidName();

/*
 * Prints a message when entering an invalid input:

 * @return
 *      void
 */

void printInvalidInput();

/*
 * Prints whose turn is it (used at the start of each player's turn):

 * @param name - The name of the player.
 * @return
 *      void
 */

void printTurnStartMessage(const std::string &name);


/* Prints info at the start of a round (used at the start of each round):

* @param roundCount - A number indicated what round is it in the game at this stage of the game.
* @return
*      void
*/
void printRoundStartMessage(int roundCount);

/*
 * Prints info in case a player won in an encounter (Battle card):

 * @param playerName - The name of the player engaging in the encounter.
 * @param monsterName - The name of the monster engaging in the encounter.
 * @return
 *      void
 */
void printWinBattle(const std::string &playerName, const std::string &monsterName);

/*
 * Prints info in case a player lost in an encounter (Battle card):

 * @param playerName - The name of the player engaging in the encounter.
 * @param monsterName - The name of the monster engaging in the encounter.
 * @param HP - The amount of HP the player has lost due to losing in this encounter.
 * @return
 *      void
 */
void printLossBattle(const std::string &playerName, const std::string &monsterName);

/*
 * Prints a message indicating the start of the LeaderBoard Ranking:

 * @return
 *      void
 */
void printLeaderBoardStartMessage();

/*
 * Prints the ranking of a player in the leaderboard:
 
 * @param ranking - The player's ranking in the leaderBoard.
 * @param player - The player whose ranked in that place to print his info in the leaderboard.
 * @param status - The player's status in the game at this stage (Won/Ongoing/KO).
 * @return
 *      void
 */
//void printPlayerLeaderBoard(int ranking, const Player &player);

/*
 * Prints info indicating the end of the game:
 
 * @return
 *      void
 */
void printGameEndMessage();


/*
 * Prints a message indicating that the user has entered an invalid team size:
 
 * @return
 *      void
 */
void printInvalidTeamSize();

/*
 * Prints a message asking the user to enter a team size:
 
 * @return
 *      void
 */
void printEnterTeamSizeMessage();

/* ---------------------------------------------------------------------------------------------- */


/*
 * Numeric stats of a card.
 */
struct CardStats{
    int force;  // The force of the monster
    int loot; // The profit you get when winning a battle or when getting a "Treasure" card
    int hpLossOnDefeat; // The amount of hp you lose when losing the battle

    int cost; // The cost of a "Buff/Heal" card
    int heal; // The amount of HP you get when buying a "HEAL" card
    int buff; // The amount of force you get when buying a "BUFF" card


    /*
     *C'tor of CardStats:
     *
     * @param force - The force of the card (monster).
     * @param hpLoss - HP loss when losing the battle.
     * @param cost - The cost of the card when is type is "Buff" or "Heal".
     * @param heal - The amount of HP is given when buying a "Heal" card.
     * @param buff - The amount of force is given when buying a "Buff" card.
     * @param loot - The profit from winning a battle or when getting a "Treasure" card.
     * @return
     *      New instance of CardStats.
    */
    explicit CardStats(int force = 0, int hpLoss = 0, int cost = 0, int heal = 0, int buff = 0, int loot = 0)
    {
        this->force = force;
        this->hpLossOnDefeat = hpLoss;
        this->cost = cost;
        this->heal = heal;
        this->buff = buff;
        this->loot = loot;
    }
};


/*
 * Prints info of a Battle card:
 *
 * @param card - Stats of the card.
 * @return
 *      void
 */
void printBattleCardInfo(const CardStats& card);


/*
 * Prints info of a Battle outcomes:
 *
 * @param win - Boolean.
 * @return
 *      void
 */
void printBattleResult(bool win);


/*
 * Prints info of a Buff card:
 *
 * @param win - Is the player won or lost the battle?
 * @return
 *      void
 */
void printBuffCardInfo(const CardStats& card);


/*
 * Prints info of a Heal card:
 *
 * @param card - Stats of the card.
 * @return
 *      void
 */
void printHealCardInfo(const CardStats& card);


/*
 * Prints info of a Treasure card:
 *
 * @param card - Stats of the card.
 * @return
 *      void
 */
void printTreasureCardInfo(const CardStats& card);


/*
 * Prints the details of the player:
 *
 * @param name - The name of the player.
 * @param level - The player's level.
 * @param force - The player's force.
 * @param hp - The player's HP points.
 * @param coins - The player's amount of coins.
 * @return
 *      void
 */
void printPlayerInfo(const char* name, int level, int force, int hp, int coins);


#endif //CPP_UTIL_H
