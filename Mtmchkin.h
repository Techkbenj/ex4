#ifndef MTMCHKIN_H_
#define MTMCHKIN_H_

#include <iostream>
#include <memory>
#include <vector>
#include "Cards/Card.h"
#include "Cards/Barfight.h"
#include "Cards/BattleCard.h"
#include "Cards/Dragon.h"
#include "Cards/Fairy.h"
#include "Cards/Goblin.h"
#include "Cards/Merchant.h"
#include "Cards/Pitfall.h"
#include "Cards/Treasure.h"
#include "Cards/Vampire.h"
#include "Cards/Gang.h"
#include "Players/Player.h"
#include "Players/Fighter.h"
#include "Players/Rogue.h"
#include "Players/Wizard.h"
#include "Exception.h"



class Mtmchkin{
private:
    std::vector<std::unique_ptr<Card>> m_cards;
    std::vector<std::unique_ptr<Player>> m_players;
    int m_roundNumber;
    int m_indexForCards;
    int m_indexForBeginPlayers;
    int m_indexForLastPlayers;
    std::vector<int> m_placingThePlayers;

public:
    
    /*
    * C'tor of Mtmchkin class
    *
    * @param filename - a file which contains the cards of the deck.
    * @return
    *      A new instance of Mtmchkin.
    */
    Mtmchkin(const std::string fileName);
    
    /*
    * Play the next Round of the game - according to the instruction in the exercise document.
    *
    * @return
    *      void
    */
    void playRound();
    
    /*
    * Prints the leaderBoard of the game at a given stage of the game - according to the instruction in the exercise document.
    *
    * @return
    *      void
    */
    void printLeaderBoard() const;
    
    /*
    *  Checks if the game ended:
    *
    *  @return
    *          True if the game ended
    *          False otherwise
    */
    bool isGameOver() const;
    
	/*
    *  Returns the number of rounds played.
    *
    *  @return
    *          int - number of rounds played
    */
    int getNumberOfRounds() const;

    void createGang(std::ifstream &source, int numOfLine);
};



#endif /* MTMCHKIN_H_ */
