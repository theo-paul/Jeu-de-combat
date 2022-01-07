#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <vector>
#include <map>
#include "parsing.h"

int main(int argc, char** argv)
{
	std::vector<created_Character*> liste_Character = parsing::parsed_Character();
	std::vector<created_Weapon*> liste_Weapon = parsing::parsed_Weapon();
	std::vector<created_Character*>::iterator iterator_Character;
	std::vector<created_Weapon*>::iterator iterator_Weapon;

	
	for (iterator_Character = liste_Character.begin(); iterator_Character < liste_Character.end(); iterator_Character++)
	{
		std::cout << "Classe : " << (*iterator_Character)->m_classe_Character << std::endl;
		std::cout << "Nom : " << (*iterator_Character)->m_nom_Character << std::endl;
		std::cout << "Vitesse : " << (*iterator_Character)->m_vitesse_Character << std::endl;
		std::cout << "Defense : " << (*iterator_Character)->m_defense_Character << std::endl;
		std::cout << "Attaque : " << (*iterator_Character)->m_val_attaque_Character << std::endl;
		std::cout << "Intelligence : " << (*iterator_Character)->m_intelligence_Character << std::endl;
		std::cout << "HP : " << (*iterator_Character)->m_val_vie_Character << std::endl;
		std::cout << "Defense : " << (*iterator_Character)->m_defense_Character << std::endl;
		std::cout << "Agilite : " << (*iterator_Character)->m_agilite_Character << std::endl;
		std::cout << "\n";
	}
	
	for (iterator_Weapon = liste_Weapon.begin(); iterator_Weapon < liste_Weapon.end(); iterator_Weapon++)
	{
		std::cout << "Type : " << (*iterator_Weapon)->m_classe_Weapon << std::endl;
		std::cout << "Nom : " << (*iterator_Weapon)->m_nom_Weapon<< std::endl;
		std::cout << "HP : " << (*iterator_Weapon)->m_hp_Weapon << std::endl;
		std::cout << "Cout : " << (*iterator_Weapon)->m_cost_Weapon << std::endl;
		std::cout << "Intelligence : " << (*iterator_Weapon)->m_intelligence_Weapon << std::endl;
		std::cout << "Critique : " << (*iterator_Weapon)->m_critique_Weapon << std::endl;
		std::cout << "Degat : " << (*iterator_Weapon)->m_degat_Weapon << std::endl;
		std::cout << "Defense : " << (*iterator_Weapon)->m_defense_Weapon << std::endl;
		std::cout << "Fleche : " << (*iterator_Weapon)->m_arrow_Weapon << std::endl;
		std::cout << "Durabilite : " << (*iterator_Weapon)->m_durabilite_Weapon << std::endl;
		std::cout << "\n";
	}
	
	return 0;
}


