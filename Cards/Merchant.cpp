#include "Merchant.h"

const int POTION_COST = 5;
const int POTION_HEAL = 1;
const int BOOST_COST = 10;
const int BOOST_AMOUNT = 1;

Merchant::Merchant() : Card("Merchant") {};

void Merchant::encounter(Player& player) const
{
    std::string input;
    printMerchantInitialMessageForInteractiveEncounter(std::cout, player.getName(), player.getCoins());
    std::getline(std::cin, input);
    while (input != "0" || input != "1" || input != "2")
    {
        printInvalidInput();
        std::getline(std::cin, input);
    }
    bool sufficientCoins;
    int cost = 0;
    if (input == "1")
    {
        sufficientCoins = (player.getCoins() >= POTION_COST);
        if(sufficientCoins)
        {
            cost = POTION_COST;
            player.pay(cost);
            player.heal(POTION_HEAL);
        }
    }
    if (input == "2")
    {
        sufficientCoins = (player.getCoins() >= BOOST_COST);
        if(sufficientCoins)
        {
            cost = BOOST_COST;
            player.pay(cost);
            player.buff(BOOST_AMOUNT);
        }
    }
    if (!sufficientCoins)
    {
        printMerchantInsufficientCoins(std::cout);
    }
    else
    {
        printMerchantSummary(std::cout, player.getName(), std::stoi(input), cost);
    }
    
}