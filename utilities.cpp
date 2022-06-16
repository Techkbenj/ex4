//
// Created by itke on 4/20/2022.
//

#include "utilities.h"

using std::cout;
using std::string;
using std::ostream;
using std::endl;

const char* LINE_DIVIDER  = "------------------------";
/* ---------------------------------------------------------------------------------------------- */
// ----------------       Print functions for Player class          -----------------------

void printPlayerDetails(ostream &os, const string &name, const string &job, int level, int force, int HP, int coins)
{
    const int nameDistance = 16;
    const int distance = 6;
    os << name;
    for(unsigned int i = 0; i < nameDistance - name.size(); i++){
        os << " ";
    }
    os << level;
    if(level < 10){
        os << " ";
    }
    os <<  "        " << force;
    for(unsigned int i = 0; i < distance - std::to_string(force).size(); i++){
        os << " ";
    }
    os << HP;
    for(unsigned int i = 0; i < distance - std::to_string(HP).size(); i++){
        os << " ";
    }
    os << coins;
    for(unsigned int i = 0; i < distance - std::to_string(coins).size(); i++){
        os << " ";
    }
    os << job << "  ";
}

/* ---------------------------------------------------------------------------------------------- */
// ----------------------------        Print functions for Card class         --------------------------

void printCardDetails(ostream &os, const string &name)
{
    os << "Card Details:" << endl;
    os << "Name: " << name << endl;
}

void printEndOfCardDetails(ostream &os)
{
    os << "-------------------------------" << std::endl;
}  

void printMerchantInitialMessageForInteractiveEncounter(ostream &os, const string &playerName, int coins)
{
    os << "You've ran into a Merchant!" << endl;
    os << "Browse his wares:"<< endl;
    os << "Health Potion (heals 1 health point) : 5 coins per potion." << endl;
    os << "Force boost (adds 1 force): 10 coins per boost." << endl;
    os << "Enter 1 for Health Potion, 2 for force boost or 0 to leave." << endl;
    os << playerName << " has " << coins << " coins" << endl;
}

void printMerchantInsufficientCoins(std::ostream &os){
    cout << "You dont have enough coins for this purchase. Please try again." << endl;
}

void printMonsterDetails(ostream &os, int force, int damage, int coins, bool isDragon)
{
    os << "Force: " << force << endl;
    if (isDragon)
        os << "Damage upon loss: " << "Infinite" << endl;
    else        
        os << "Damage upon loss: " << damage << endl;
    os << "Coins: " << coins << endl;
}


void printBarfightMessage(bool isFighter)
{
    if(isFighter){
        cout << "You've won the scuffle without losing any health points." << endl;
    }
    else{
        cout << "This is but a flesh wound. You've lost 10 health points" << endl ;
    }
}

void printFairyMessage(bool isWizard)
{
    if(isWizard){
        cout << "Fairies like wizards, you've gained 10 health points." << endl;
    }
    else{
        cout << "Nothing happened." << endl ;
    }
}

void printPitfallMessage(bool isRogue)
{
    if(isRogue){
        cout << "You saw the trap coming from miles away, you dodged it gracefully." << endl;
    }
    else{
        cout << "You fell into the trap, lose 10 health points." << endl ;
    }
}

void printTreasureMessage()
{
    cout << "You've stumbled into a pile of coins! you've gained 10 gold." << endl;
}

void printMerchantSummary(ostream &os, const string &playerName, int type, int cost)
{
    os << playerName << " has paid " << cost << " coins ";
    if(type != 0){
        os << "for ";;
    }

    if(type == 1){
        os << "1 health potion!";
    }
    if(type == 2){
        os << "1 force boost!";
    }
    os <<  endl <<"Safe travels!" << endl;
}

/* ---------------------------------------------------------------------------------------------- */
// Prints for Game

void printInsertPlayerMessage()
{
    cout << "Please insert the player name and class: " << endl;
}

void printInvalidTeamSize()
{
    cout << "Invalid team size! Please enter a different size." << endl;
}

void printInvalidClass()
{
    cout << "You have entered an invalid class. Please try again." << endl;
}

void printInvalidName()
{
    cout << "You have entered an invalid name. Please try again." << endl;
}

void printInvalidInput()
{
    cout << "You have entered an invalid input. Please try again." << endl;
}

void printStartGameMessage()
{
    cout << "Welcome to the world of MtmChkin!!!" << endl;
}

void printEnterTeamSizeMessage()
{
    cout << "Please enter team size: (2-6)" << endl;
}

void printTurnStartMessage(const string &name)
{
    cout << "Start of " << name << "'s turn: " << endl;
}

void printRoundStartMessage(int roundCount)
{
    cout << endl << "-------------------------------------------" << endl;
    cout << "Start of round " << roundCount << ":" << endl << endl;
}

void printWinBattle(const string &playerName, const string &monsterName)
{
    cout << "Player " << playerName << " has defeated " << monsterName << " and rose 1 Level!" << endl;
}

void printLossBattle(const string &playerName, const string &monsterName)
{
    cout << "Player " << playerName << " has been defeated by a " << monsterName << "." << endl;
}

void printLeaderBoardStartMessage()
{
    cout << endl << "The current ranking of the Team:" << endl;
    cout << "Ranking    Player Name     Level     Force HP    Coins Job" << endl;
}

//void printPlayerLeaderBoard(int ranking, const Player& player)
//{
//    cout << ranking << "          " << player << endl;
//}

void printGameEndMessage()
{
    cout << "The Game has ended!!!" << endl;
}

//utilities from HW2 --------------------------------------------------------------


void printBattleCardInfo(const CardStats& card)
{
    cout << "Card drawn:" << endl;
    cout << "Type: Battle" << endl;
    cout << "Force: " << card.force << endl;
    cout << "Profit (on win): " << card.loot << endl;
    cout << "Damage taken (on loss): " << card.hpLossOnDefeat << endl;
    cout << LINE_DIVIDER << endl;
}

void printBattleResult(bool win)
{
    if (win){
        cout << "The player defeated the monster and won the loot! Hooray!" << endl;
        cout << LINE_DIVIDER << endl;
    } else{
        cout << "After a long battle, the player has fled wounded and failed." << endl;
        cout << LINE_DIVIDER << endl;
    }
}

void printBuffCardInfo(const CardStats& card)
{
    cout << "Card drawn:" << endl;
    cout << "Type: Buff" << endl;
    cout << "Buff points: " << card.buff << endl;
    cout << "Cost: " << card.cost << endl;
    cout << LINE_DIVIDER << endl;
}

void printHealCardInfo(const CardStats& card)
{
    cout << "Card drawn:" << endl;
    cout << "Type: Heal" << endl;
    cout << "Heal points: " << card.heal << endl;
    cout << "Cost: " << card.cost << endl;
    cout << LINE_DIVIDER << endl;
}

void printTreasureCardInfo(const CardStats& card)
{
    cout << "Card drawn:" << endl;
    cout << "Type: Treasure" << endl;
    cout << "Coins: " << card.loot << endl;
    cout << LINE_DIVIDER << endl;
}

