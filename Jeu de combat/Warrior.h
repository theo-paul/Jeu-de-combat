#pragma once
#include "utils.h"

class CWarrior : protected CCharacter
{
private:
	int m_parer;
	int m_parade;

protected:
	
	std::string m_nom_Character;
	class CWeapons* Weapon;
	int m_val_vie_Character;
	int m_val_esquive_Character;
	int m_vitesse_Character;
	int m_val_attaque_Character;
	int m_defense_Character;
	int m_agilite_Character;
	int m_intelligence_Character;
	int m_priorite_Character;
	float m_viemax_Character;
	int m_durabilite_Weapon;

	CWarrior();
	CWarrior(int parer, int parade, std::string nom_Character, CWeapons* Weapon_Character, std::string type_Character, int val_vie_Character, int val_esquive_Character, int vitesse_Character, int val_attaque_Character, int defense_Character, int agilite_Character, int intelligence_Character, int priorite_Character, float viemax_Character, int durabilite_Weapon);
	virtual ~CWarrior();
	std::string getNom();
	int getReparer();
	int getHurler();

public :
	
};