#pragma once
#include "utils.h"

class CRogue :protected CCharacter
{

protected:

	int m_empoisonnement;
	int m_degatdelarme;
	std::string m_nom_Character;
	class CWeapons* Weapon_Character;
	std::string m_type_Character;
	int m_val_vie_Character;
	int m_val_esquive_Character;
	int m_vitesse_Character;
	int m_val_attaque_Character;
	int m_defense_Character;
	int m_agilite_Character;
	int m_intelligence_Character;
	int m_priorite_Character;
	float m_viemax_Character;

	int CD_invisibilite;
	bool m_invisibilite;
	CRogue();
	CRogue(int empoisonnement, int degatdelarme, std::string nom_Character, CWeapons* Weapon_Character, std::string type_Character, int val_vie_Character, int val_esquive_Character, int vitesse_Character, int val_attaque_Character, int defense_Character, int agilite_Character, int intelligence_Character, int priorite_Character, float viemax_Character);
	virtual ~CRogue();

public:

	float getVie();
	int getEsquive();
	int getVitesse();
	float getAttaque();
	int getDefense();
	int getAgilite();
	int getIntelligence();
	int getPriorite();
	float getVieMax();
	std::string getNom();

	int getCDInvisibilite(CCharacter* ennemi);
	bool getInvisibilite();

	void AtArme(CCharacter* ennemi);
	void invisibilite();
};

