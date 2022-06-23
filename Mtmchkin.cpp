#include "Mtmchkin.h"
#include <fstream>
#include <iostream>
#include <list>

using std::cin;
using std::string;

static std::unique_ptr<Card> matchStringToCard(const string nameOfCard, int numberOfLine)
{
    if (nameOfCard == "Goblin")
    {
        return std::unique_ptr<Card>(new Goblin());
    }
    if (nameOfCard == "Vampire")
    {
        return std::unique_ptr<Card>(new Vampire());
    }
    if (nameOfCard == "Dragon")
    {
        return std::unique_ptr<Card>(new Dragon());
    }
    if (nameOfCard == "Merchant")
    {
        return std::unique_ptr<Card>(new Merchant());
    }
    if (nameOfCard == "Treasure")
    {
        return std::unique_ptr<Card>(new Treasure());
    }
    if (nameOfCard == "Pitfall")
    {
        return std::unique_ptr<Card>(new Pitfall());
    }
    if (nameOfCard == "Barfight")
    {
        return std::unique_ptr<Card>(new Barfight());
    }
    if (nameOfCard == "Fairy")
    {
        return std::unique_ptr<Card>(new Fairy());
    }
    throw DeckFileFormatError(numberOfLine);
}


static bool checkValidNumberOfPlayers(int num)
{
    if ((num > 6) || (num < 2))
    {
        return false;
    }
    return true;
}

static bool checkSpaces(const string maybeSpace)
{
    for (char i : maybeSpace)
    {
        if (isspace(i))
        {
            return true;
        }
    }
    return false;
}

static bool checkOnlyDigit(const string maybeDigit)
{
    if (maybeDigit.find_first_not_of("0123456789") == string::npos)
    {
        return true;
    }
    return false;
}

static bool checkOnlyString(const string maybeString)
{
    if (maybeString.find_first_not_of("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ") == string::npos)
    {
        return true;
    }
    return false;
}

static bool checkValidName(const string hisName)
{
    if (!(checkOnlyString(hisName)))
    {
        return false;
    }
    if (hisName.length() > 15)
    {
        return false;
    }
    return true;
}

Mtmchkin::Mtmchkin(const string fileName) : m_players(), m_roundNumber(0), m_indexForCards(0),
m_indexForBeginPlayers(0)
{
    printStartGameMessage();
    std::ifstream source(fileName);
    if (!source)
    {
        throw DeckFileNotFound();
    }
    string line;
    bool gangBattle = false;
    int numberOfLine = 1;
    std::unique_ptr<Gang> gang;
    while (std::getline(source, line))
    {
        if (line == "Gang")
        {
            gangBattle = true;
            gang = std::move(std::unique_ptr<Gang>(new Gang()));
            numberOfLine++;
            continue;
        }
        if (gangBattle && line!="EndGang")
        {
            if (line != "Vampire" && line != "Dragon" && line != "Goblin")
            {
                throw DeckFileFormatError(numberOfLine);
            }
            gang->insertCard(line);
            numberOfLine++;
            continue;
        }
        if(line == "EndGang")
        {
            if (gangBattle == false)
            {
                throw DeckFileFormatError(numberOfLine);
            }
            gangBattle = false;
            m_cards.push_back(std::move(gang));
            numberOfLine++;
            continue;
        }
        m_cards.push_back(matchStringToCard(line, numberOfLine));
        numberOfLine++;
    }
    if (gangBattle)
    {
        throw DeckFileFormatError(numberOfLine);
    }

    source.close();
    if (m_cards.size() < 5)
    {
        throw DeckFileInvalidSize();
    }

    printEnterTeamSizeMessage();
    string playerName, typeOfPlayer, numOfPlayersString;
    int convertToInt = 0;
    bool theFinalSize = true;
    std::getline(cin, numOfPlayersString);
    while (theFinalSize)
    {
        try
        {
            convertToInt = std::stoi(numOfPlayersString);
            if(checkOnlyDigit(numOfPlayersString) && checkValidNumberOfPlayers(convertToInt))
            {
                theFinalSize = false;
            }
            else
            {
                throw std::invalid_argument("");
            }
        }
        catch (const std::exception&)
        {
            printInvalidTeamSize();
            printEnterTeamSizeMessage();
            std::getline(cin, numOfPlayersString);
        }
    }
    int n = std::stoi(numOfPlayersString);
    for (int i = 0; i < n; i++)
    {
        printInsertPlayerMessage();
        while (true)
        {
            std::getline(cin, playerName, ' ');
            std::getline(cin, typeOfPlayer);
            if (checkSpaces(typeOfPlayer))
            {
                printInvalidInput();
                continue;
            }
            if (!(checkValidName(playerName)))
            {
                printInvalidName();
                continue;
            }
            if (typeOfPlayer == "Rogue")
            {
                std::unique_ptr<Player> unTemp(new Rogue(playerName));
                m_players.push_back(std::move(unTemp));
                break;
            }
            if (typeOfPlayer == "Fighter")
            {
                std::unique_ptr<Player> unTemp(new Fighter(playerName));
                m_players.push_back(std::move(unTemp));
                break;
            }
            if (typeOfPlayer == "Wizard")
            {
                std::unique_ptr<Player> unTemp(new Wizard(playerName));
                m_players.push_back(std::move(unTemp));
                break;
            }
            printInvalidClass();
        }
    }
    m_indexForLastPlayers = m_players.size() - 1;
    for (int i = m_indexForBeginPlayers; i <= m_indexForLastPlayers; i++)
    {
        m_placingThePlayers.push_back(i);
    }
}

void Mtmchkin::playRound()
{
    m_roundNumber++;
    printRoundStartMessage(getNumberOfRounds());
    int j = m_indexForCards;
    for (int i = m_indexForBeginPlayers; i <= m_indexForLastPlayers; i++)
    {
        printTurnStartMessage(m_players[m_placingThePlayers[i]]->getName());
        m_cards[j]->encounter(*m_players[m_placingThePlayers[i]]);
        if (m_players[m_placingThePlayers[i]]->isWon())
        {
            int temp = m_placingThePlayers[i];
            m_placingThePlayers.erase(m_placingThePlayers.begin() + i);
            m_placingThePlayers.insert(m_placingThePlayers.begin() + m_indexForBeginPlayers, temp);
            m_indexForBeginPlayers++;
        }
        else
        {
            if (m_players[m_placingThePlayers[i]]->isKnockedOut())
            {
                int temp2 = m_placingThePlayers[i];
                m_placingThePlayers.erase(m_placingThePlayers.begin() + i);
                m_placingThePlayers.insert(m_placingThePlayers.end() - (m_placingThePlayers.size() - m_indexForLastPlayers), temp2);
                m_indexForLastPlayers--;
                i--;
            }
        }
        if (j >= signed(m_cards.size()) - 1)
        {
            j = 0;
        }
        else
        {
            j += 1;
        }
    }
    m_indexForCards = j;
    if (isGameOver())
    {
        printGameEndMessage();
    }
}

int Mtmchkin::getNumberOfRounds() const
{
    return m_roundNumber;
}

void Mtmchkin::printLeaderBoard() const
{
    printLeaderBoardStartMessage();
    for (int i = 1; i <= signed(m_players.size()); i++)
    {
        printPlayerLeaderBoard(i, *m_players[m_placingThePlayers[i - 1]]);
    }
}

bool Mtmchkin::isGameOver() const
{
    if (m_indexForBeginPlayers > m_indexForLastPlayers)
    {
        return true;
    }
    return false;
}







