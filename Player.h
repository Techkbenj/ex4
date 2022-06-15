#ifndef PLAYER_H
#define PLAYER_H

#include <string>
#include <iostream>
#include "utilities.h"

const int DEFAULT_MAX_HP = 100;
const int DEFAULT_FORCE = 5;

class Player {
    std::string m_name; //The name of the player.
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
     * @param maxHp - The max health of the player.
     * @param force - The initial force points of the player.
     * @return
     *      A new Player.
    */
    Player(std::string name, int maxHp = DEFAULT_MAX_HP, int force = DEFAULT_FORCE);

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
    ~Player() = default;

    /*
     * Assignment operator of player Class
     * 
     * @param Player - The player from which the assignment if coming
     * @return 
     *      The assigned player 
     */
    Player& operator=(const Player& player) = default;

    /*
     * Prints the stats of a player
     *
     * @return 
     *      void
     */
    void printInfo() const;

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
    void heal(int health);

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
    void addCoins(int coins);

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
    int getAttackStrength() const;
};

#endif /* PLAYER_H */