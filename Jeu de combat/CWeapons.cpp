#include "CWeapons.h"

CWeapons::CWeapons()
{
	m_nom_Weapon = "";
    m_classe_Weapon ="";
    m_degat_Weapon = 0;
    m_critique_Weapon = 0;
    m_bonus_Weapon = 0;
    m_hp_Weapon = 0;
    m_cost_Weapon = 0;
    m_intelligence_Weapon = 0;
    m_attaque_Weapon = 0;
    m_durabilite_Weapon = 0;
    m_arrow_Weapon = 0;
    m_agilite_Weapon = 0;
    m_defense_Weapon = 0;
}

CWeapons::CWeapons(std::string nom_Weapon, std::string classe_Weapon, float degat_Weapon, float critique_Weapon, int bonus_Weapon, int hp_Weapon, int cost_Weapon, int intelligence_Weapon, int attaque_Weapon, int durabilite_Weapon, int arrow_Weapon, int agilite_Weapon, int defense_Weapon)
{
	m_nom_Weapon = nom_Weapon;
    m_classe_Weapon = classe_Weapon;
    m_degat_Weapon = degat_Weapon;
    m_critique_Weapon = critique_Weapon;
    m_bonus_Weapon = bonus_Weapon;
    m_hp_Weapon = hp_Weapon;
    m_cost_Weapon = cost_Weapon;
    m_intelligence_Weapon = intelligence_Weapon;
    m_attaque_Weapon = attaque_Weapon;
    m_durabilite_Weapon = durabilite_Weapon;
    m_arrow_Weapon = arrow_Weapon;
    m_agilite_Weapon = agilite_Weapon;
    m_defense_Weapon = defense_Weapon;
}

CWeapons::~CWeapons()
{

}
