#include "Player.h"

const int DEFAULT_LEVEL = 1;
const int DEFAULT_COINS = 0;
const int MAX_LEVEL = 10;

static bool isNegative(int num)
{
    if (num < 0)
    {
        return true;
    }
    return false;
}

Player::Player(std::string name, int maxHp, int force) :
    m_name(name), m_level(DEFAULT_LEVEL), m_force(force <= 0 ? DEFAULT_FORCE : force),
    m_maxHp(maxHp <= 0 ? DEFAULT_MAX_HP : maxHp), m_coins(DEFAULT_COINS)
{
    m_hp = maxHp;
}

void Player::printInfo() const
{
    printPlayerInfo(m_name.c_str(), m_level, m_force, m_hp, m_coins);
}

void Player::levelUp()
{
    if (m_level < MAX_LEVEL)
    {
        m_level++;
    }
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