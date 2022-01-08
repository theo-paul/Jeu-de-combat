#pragma once
#include "utils.h"

class CCharacter
{
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
    float m_coeff;

    //Methode standard.
    CCharacter();
    CCharacter(std::string nom_Character, CWeapons* Weapon_Character, int val_vie_Character, int val_esquive_Character, int vitesse_Character, int val_attaque_Character, int defense_Character, int agilite_Character, int intelligence_Character, int priorite_Character, float viemax_Character);

public:
    virtual ~CCharacter();

    float atqmain(CCharacter* m_defense_Character);
    
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
    
};




