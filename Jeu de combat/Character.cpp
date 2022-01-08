#include "utils.h"

CCharacter::CCharacter()
{
    m_nom_Character = "";
    m_val_vie_Character = 100;
    CWeapons* C_Weapon = NULL;
    m_val_esquive_Character;
    m_vitesse_Character = 1;
    m_val_attaque_Character = 1;
    m_defense_Character = 1;
    m_agilite_Character = 1;
    m_intelligence_Character = 1;
    m_priorite_Character = 0;
    m_viemax_Character = 100;

}

CCharacter::CCharacter(std::string nom_Character, CWeapons* Weapon_Character, float val_vie_Character, int val_esquive_Character, int vitesse_Character, float val_attaque_Character, int defense_Character, int agilite_Character, int intelligence_Character, int priorite_Character, float viemax_Character)
{
    m_nom_Character = nom_Character;
    m_val_vie_Character = val_vie_Character;
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

CCharacter::~CCharacter()
{

}

std::string CCharacter::getNom()
{
    return m_nom_Character;
}

float CCharacter::getVie()
{
    return m_val_vie_Character;
}

int CCharacter::getEsquive()
{
    if (m_val_esquive_Character * rand() % 5 > 4)
    {
        std::cout << this->getNom() << "a esquive l'attaque\n";
        return 1;

    }
    return 0;
}

int CCharacter::getVitesse()
{
    return m_vitesse_Character;
}

float CCharacter::getAttaque()
{
    return m_val_attaque_Character;
}

int CCharacter::getDefense()
{
    return m_defense_Character;
}

int CCharacter::getAgilite()
{
    return m_agilite_Character;
}
int CCharacter::getIntelligence()
{
    return m_intelligence_Character;
}

int CCharacter::getPriorite()
{
    return m_priorite_Character;
}

float CCharacter::getVieMax()
{
    return m_viemax_Character;
}

float CCharacter::atqmain(CCharacter *m_defense)
{
    float degatmn = 0;
    srand(time(NULL));
    float coeff = float((rand() % (100 - 95) + 95)) / 100;    //de type (b -a) + b
    degatmn = 15 * ( (m_val_attaque_Character) / m_defense->getDefense() ) * coeff;
    return degatmn;
}

void choix_Character()
{

    std::cout << "Choisir le nom de votre hero hero : "<<std::endl;


}


