#ifndef EX4_Card_H
#define EX4_Card_H

#include <string>
#include "../Players/Player.h"
#include "../utilities.h"



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

    /*
     *  Copy C'tor of Card class
     *
     * @param card - The card to copy.
     * @return
     *      A new instance of Card.
    */
    Card(const Card& card) = default;

    /*
     * Assignment operator of Card Class
     * 
     * @param card - The Card from which the assignment is coming
     * @return 
     *      The assigned Card
     */
    Card& operator=(const Card& card) = default;

    /*
     * Friend function of Card class;
    */
    friend std::ostream& operator<<(std::ostream& os, const Card& card);

    /*
     * Prints the card info.
     *
     * @return
     *      void
    */
    virtual void printInfo(std::ostream& os) const;

    /*
     * Initiates an encounter with the card.
     * @return 
     *      void
    */
    virtual void encounter(Player& player) const = 0;

    /*
     * Returns the card name.
     * @return
     *      Name of card.
    */
    const std::string getName() const;

protected:
    std::string m_name;
    
};


#endif //EX4_Card_H

