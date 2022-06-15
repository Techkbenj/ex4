#ifndef EX4_Card_H
#define EX4_Card_H

#include <string>
#include "Player.h"


class Card {
public:
    /*
     * C'tor of Card class
     *
     * @param name - The name of the card.
     * @return
     *      A new instance of Card.
    */
    Card(std::string name);

    /*
     * D'tor of Card class
    */
    virtual ~Card() = default;

    //Card(const Card&) = default;
    //Card& operator=(const Card& other) = default;

    friend std::ostream& operator<<(std::ostream& os, const Card& card);

    /*
     * Prints the card info.
     *
     * @return
     *      void
    */
    virtual void printInfo(std::ostream& os) const = 0;

    /*
     * Initiates an encounter with the card.
     * @return 
     *      void
    */
    virtual void encounter(Player& player) const = 0;

private:
    string m_name;
    
};


#endif //EX4_Card_H
