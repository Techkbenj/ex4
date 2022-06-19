#include <iostream>
#include "Mtmchkin.h"

int main()
{
    try
    {
        Mtmchkin game("deck.txt");
        while (!game.isGameOver())
        {
            game.playRound();
        }
        game.printLeaderBoard();
    }
    catch (const DeckFileNotFound& e)
    {
        std::cerr << e.what() << std::endl;
    }
    catch (const DeckFileFormatError& e)
    {
        std::cerr << e.what() << std::endl;
    }
    catch (const DeckFileInvalidSize& e)
    {
        std::cerr << e.what() << std::endl;
    }
    return 0;
}
