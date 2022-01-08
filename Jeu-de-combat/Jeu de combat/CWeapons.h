#pragma once
#include "utils.h"

class CWeapons
{
protected:
	std::string     m_nom_Weapon;
    std::string     m_classe_Weapon;
	float           m_degat_Weapon;
	float           m_critique_Weapon;
	int             m_bonus_Weapon;
    int             m_hp_Weapon;
    int             m_cost_Weapon;
    int             m_intelligence_Weapon;
    int             m_attaque_Weapon;
    int             m_durabilite_Weapon;
    int             m_arrow_Weapon;
    int             m_agilite_Weapon;
    int             m_defense_Weapon;


    CWeapons(std::string nom_Weapon, std::string classe_Weapon, float degat_Weapon, float critique_Weapon, int bonus_Weapon, int hp_Weapon, int cost_Weapon, int intelligence_Weapon, int attaque_Weapon, int durabilite_Weapon, int arrow_Weapon, int agilite_Weapon, int defense_Weapon);
    CWeapons();

public:
	//CWeapons(std::string nom, float degat, float crit, int bonus);
	virtual ~CWeapons();


};