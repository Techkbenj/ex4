#ifndef PLAYER_H
#define PLAYER_H

#include <string>
#include <iostream>
#include "../utilities.h"


class Player {

protected:
    std::string m_name; //The name of the player.
    std::string m_class; //The class of the player.
    int m_level; //The level of the player. Range of level can be from 1 to 10.
    int m_force; //The force points of a player.
    int m_maxHp; //The max health points the player can have.
    int m_hp; //The currect health points the player has.
    int m_coins; //The number of coins the player possess.

    public:

     /*
     * C'tor of Player class
     *
     * @param name - The name of the player.
     * @param class - The class of the player.
     * @return
     *      A new Player.
    */
    Player(std::string name, std::string class);

    /*
    * Copy C'tor of Player class
    * @param Player - The player to copy the stats from.
    * @return 
    *      A new Player.
    */
    Player(const Player& player) = default;

    /*
     * D'tor of Player Class
     */
    virtual ~Player();

    /*
     * Assignment operator of player Class
     * 
     * @param Player - The player from which the assignment if coming
     * @return 
     *      The assigned player 
     */
    Player& operator=(const Player& player) = default;

    /*
     * Levels up the player by 1 level.
     *
     * @return 
     *      void
     */
    void levelUp();

    /*
     * Returns the level of the player.
     *
     * @return 
     *      The level of the player.
     */
    int getLevel() const;

    /*
     * Adds force points to the current force of the player.
     *
     * @param addForce - amount of force points to add to the force of a player.
     * @return 
     *      void
     */
    void buff(int addForce);

    /*
     * Heals the player by the amount of given health points.
     *
     * @param health - Amount of health points to heal the player with.
     * @return 
     *      void
     */
    virtual void heal(int health);

    /*
     * Lowers the health of the player.
     *
     * @param hitPoints - The amout of damage the player sustains.
     * @return 
     *      void
     */
    void damage(int hitPoints);

    /*
     * Determines if the player is knocked out or not.
     *
     * @return 
     *      True if the player is knocked out.
     */
    bool isKnockedOut() const;

    /*
     * Adds coins to the player.
     *
     * @param coins - The amount of coins to give to the player.
     * @return 
     *      void
     */
    virtual void addCoins(int coins);

    /*
     * Lowers the amount of coins the player has.
     *
     * @param coins - The amount of coins to take from the player.
     * @return 
     *      True if the removal succeeded.
     */
    bool pay(int coins);

    /*
     * Returns the attack strength of a player.
     * The attack strength is the sum of the player's level and force.
     *
     * @return 
     *      The attack strength of the player.
     */
    virtual int getAttackStrength() const;

    std::string getName();

    bool isWon() const;
    
    const std::string getClass() const;

    virtual void printInfoOfPlayer(std::ostream& os) const = 0;

    friend std::ostream& operator<<(std::ostream& os, const Player& player);
};

#endif /* PLAYER_H */