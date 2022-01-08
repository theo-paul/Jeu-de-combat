#include "utils.h"

CRogue::CRogue()
{
    
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

}

CRogue::CRogue(int empoisonnement, int degatdelarme, std::string nom_Character, class CWeapons* Weapon_Character, std::string type_Character, int val_vie_Character, int val_esquive_Character, int vitesse_Character, int val_attaque_Character, int defense_Character, int agilite_Character, int intelligence_Character, int priorite_Character, float viemax_Character)
{
    m_empoisonnement = empoisonnement;
    m_degatdelarme = degatdelarme;
    m_nom_Character = nom_Character;
    m_val_vie_Character = val_vie_Character;
    m_type_Character = type_Character;
    CWeapons* C_Weapon = Weapon_Character;
    m_val_esquive_Character = val_esquive_Character;
    m_vitesse_Character = vitesse_Character;
    m_val_attaque_Character = val_attaque_Character;
    m_defense_Character = defense_Character;
    m_agilite_Character = agilite_Character;
    m_intelligence_Character = intelligence_Character;
    m_priorite_Character = priorite_Character;
    m_viemax_Character = viemax_Character;
}

CRogue::~CRogue()
{

}

std::string CRogue::getNom()
{
    return m_nom_Character;
}

float CRogue::getVie()
{
    return m_val_vie_Character;
}

int CRogue::getEsquive()
{
    if (m_val_esquive_Character * rand() % 5 > 4)
    {
        std::cout << this->getNom() << "a esquive l'attaque\n";
        return 1;

    }
    return 0;
}

int CRogue::getVitesse()
{
    return m_vitesse_Character;
}

float CRogue::getAttaque()
{
    return m_val_attaque_Character;
}

int CRogue::getDefense()
{
    return m_defense_Character;
}

int CRogue::getAgilite()
{
    return m_agilite_Character;
}
int CRogue::getIntelligence()
{
    return m_intelligence_Character;
}

int CRogue::getPriorite()
{
    return m_priorite_Character;
}

float CRogue::getVieMax()
{
    return m_viemax_Character;
}
