#pragma once
#include "utils.h"

/*
enum class type_Character
{
    ARCHER,
    MAGE,
    ROGUE,
    WARRIOR, 
    NB_CLASS
};

enum class type_Weapon
{
    BOW,
    DAGGER,
    SWORD,
    WAND,
    NB_TYPE
};*/

typedef struct created_Weapon
{
    std::string     m_nom_Weapon;
    std::string     m_classe_Weapon;
    int             m_hp_Weapon;
    int             m_cost_Weapon;
    int             m_intelligence_Weapon;
    float           m_critique_Weapon;
    float           m_degat_Weapon;
    int             m_attaque_Weapon;
    int             m_durabilite_Weapon;
    int             m_arrow_Weapon;
    int             m_agilite_Weapon;
    int             m_defense_Weapon;

}created_Weapon;

typedef struct created_Character
{
    std::string     m_nom_Character;
    std::string     m_classe_Character;
    int             m_val_vie_Character;
    int             m_vitesse_Character;
    int             m_val_attaque_Character;
    int             m_intelligence_Character;
    int             m_defense_Character;
    float           m_val_esquive_Character;
    int             m_agilite_Character;
    float           m_priorite_Character;
}created_Character;

class parsing
{
public :
    static std::vector<created_Character*> parsed_Character();
    static std::vector<created_Weapon*> parsed_Weapon();

};