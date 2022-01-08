#include "utils.h"

CWarrior::CWarrior()
{
    m_parer = 0;
    m_parade = 0;
    m_nom_Character = "";
    class CWeapons* Weapon;
    m_val_vie_Character = 10;
    m_val_esquive_Character = 0;
    m_vitesse_Character = 10;
    m_val_attaque_Character = 10;
    m_defense_Character = 10;
    m_agilite_Character = 1;
    m_intelligence_Character = 0;
    m_priorite_Character = 0;
    m_viemax_Character = 10;
    m_durabilite_Weapon = 0;
}

CWarrior::CWarrior(int parer, int parade, std::string nom_Character, CWeapons* Weapon_Character, std::string type_Character, int val_vie_Character, int val_esquive_Character, int vitesse_Character, int val_attaque_Character, int defense_Character, int agilite_Character, int intelligence_Character, int priorite_Character, float viemax_Character, int durabilite_Weapon)
{
	m_parer = parer;
	m_parade = parade;
    m_nom_Character = nom_Character;
    class CWeapons* Weapon;
    m_val_vie_Character = val_vie_Character;
    m_val_esquive_Character = val_esquive_Character;
    m_vitesse_Character = vitesse_Character;
    m_val_attaque_Character = val_attaque_Character;
    m_defense_Character = defense_Character;
    m_agilite_Character = agilite_Character;
    m_intelligence_Character = intelligence_Character;
    m_priorite_Character = priorite_Character;
    m_viemax_Character = viemax_Character;
    m_durabilite_Weapon = durabilite_Weapon;
}

CWarrior::~CWarrior()
{

}

std::string CWarrior::getNom()
{
    return m_nom_Character;
}

int CWarrior::getReparer()
{
    if (m_durabilite_Weapon == 0)
    {
        m_durabilite_Weapon = 1;
    }
    else
    {
        m_durabilite_Weapon = m_durabilite_Weapon + m_durabilite_Weapon;
    }
    return m_durabilite_Weapon;
}

int CWarrior::getHurler()
{
    int hurler = 0;

    if (hurler == 1)
        {
        m_priorite_Character = 1;
        }
    m_priorite_Character = 0;
    return m_priorite_Character;
}
