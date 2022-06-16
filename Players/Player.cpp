#include "Player.h"

const int DEFAULT_LEVEL = 1;
const int DEFAULT_COINS = 10;
const int MAX_LEVEL = 10;
const int DEFAULT_MAX_HP = 100;
const int DEFAULT_FORCE = 5;

static bool isNegative(int num)
{
    if (num < 0)
    {
        return true;
    }
    return false;
}

Player::Player(std::string name, std::string class) :
    m_name(name), m_level(DEFAULT_LEVEL), m_force(DEFAULT_FORCE),
    m_maxHp(DEFAULT_MAX_HP), m_coins(DEFAULT_COINS), m_hp(DEFAULT_MAX_HP), m_class(class){}

Player::~Player() {}

void Player::levelUp()
{
    if (m_level < MAX_LEVEL)
    {
        m_level++;
    }
}

bool Player::isWon() const
{
    if (m_level == MAX_LEVEL)
    {
        return true;
    }
    return false;
}

int Player::getLevel() const
{
    return m_level;
}

void Player::buff(int addForce)
{
    if(!isNegative(addForce))
    {
        m_force += addForce;
    }
}

void Player::heal(int health)
{
    if(!isNegative(health))
    {
        m_hp += health;
    }
    if (m_hp > m_maxHp)
    {
        m_hp = m_maxHp;
    }
}

void Player::damage(int hitPoints)
{
    if(!isNegative(hitPoints))
    {
        m_hp -= hitPoints;
    }
    if (m_hp < 0)
    {
        m_hp = 0;
    }
}

bool Player::isKnockedOut() const
{
    return (m_hp == 0);
}

void Player::addCoins(int coins)
{
    if(!isNegative(coins))
    {
        m_coins += coins;
    }
}

bool Player::pay(int coins)
{
    if (m_coins >= coins)
    {
        if (!isNegative(coins))
        {
            m_coins -= coins;
        }
        return true;
    }
    return false;
}

int Player::getAttackStrength() const
{
    return m_level + m_force;
}

std::string Player::getName()
{
    return m_name;
}

const std::string getClass() const
{
    return m_class;
}

std::ostream& operator<<(std::ostream& os, const Player& player)
{
    player.printInfoOfPlayer(os);
    return os;
}