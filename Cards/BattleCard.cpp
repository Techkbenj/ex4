#include "BattleCard.h"

BattleCard::BattleCard(std::string name, int force, int lossDmg, int coins) : 
    Card(name), m_force(force), m_lossDmg(lossDmg), m_coins(coins) {}
