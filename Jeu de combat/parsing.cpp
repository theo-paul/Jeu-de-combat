#include "utils.h"
/* Il faut que ce programme puisse lire le fichier .jdc.
*en fonction de ce qu'il lit, il trie le type de personnage et stocke ses caracteristiques dans un tableau.
*	https://www.cplusplus.com/reference/sstream/istringstream/
*	https://www.cplusplus.com/reference/fstream/
*	https://www.cplusplus.com/reference/string/string/getline/
*	
*/

std::vector<created_Character*> parsing::parsed_Character()
{
	std::vector<created_Character*> res_Character;
	std::ifstream c("characters.jdc"); // Ouverture du fichier
	created_Character* creation_Character = NULL;

	if (c.is_open())
	{
		std::string line; //Stockage des lignes lues.
		std::string word; //Stockage des mots lus.

		while (getline(c, line))
		{
			std::stringstream iss(line); // Transforme la ligne en flux.
			while (getline(iss, word, '\t')) //Tant que la ligne n'est pas parcourue de \t en \t jusqu'à la fin, on lit les mots.
			{
				if (word == "") //S'il n'y a rien.
					continue; //Decallage vers la prochaine tabulation.

				if (word == "Character") //Si le mot est "Character"
				{
					creation_Character = new created_Character(); //On crée un nouveau personnage.
				}

				if (word == "Nom")
				{
					while (getline(iss, word, '\t'))
					{
						if (word != "")
							break;
					}
					creation_Character->m_nom_Character = word; //Le perso prend le mot comme nom.
				}

				if (word == "Classe")
				{
					while (getline(iss, word, '\t'))
					{
						if (word != "")
							break;
					}
					if (word == "Mage")
					{
						creation_Character->m_classe_Character = "Mage";
					}
					if (word == "Guerrier")
					{
						creation_Character->m_classe_Character = "Guerrier";
					}
					if (word == "Archer")
					{
						creation_Character->m_classe_Character = "Archer";
					}
					if (word == "Voleur")
					{
						creation_Character->m_classe_Character = "Voleur";
					}
				}

				if (word == "Vitesse")
				{
					int Vitesse = 0;
					while (getline(iss, word, '\t'))
					{
						if (word != "")
							break;
					}
					std::stringstream sstream(word);;
					sstream >> Vitesse;
					creation_Character->m_vitesse_Character = Vitesse; // on stocke spd dans m_vitesse
				}

				if (word == "Attaque")
				{
					int Attaque = 0;
					while (getline(iss, word, '\t'))
					{
						if (word != "")
							break;
					}
					std::stringstream sstream(word);;
					sstream >> Attaque;
					creation_Character->m_val_attaque_Character = Attaque; // on stocke spd dans m_vitesse
				}

				if (word == "Intelligence")
				{
					int Intelligence = 0;
					while (getline(iss, word, '\t'))
					{
						if (word != "")
							break;
					}
					std::stringstream sstream(word);;
					sstream >> Intelligence;
					creation_Character->m_intelligence_Character = Intelligence; // on stocke spd dans m_vitesse
				}

				if (word == "HP")
				{
					int HP = 0;
					while (getline(iss, word, '\t'))
					{
						if (word != "")
							break;
					}
					std::stringstream sstream(word);;
					sstream >> HP;
					creation_Character->m_val_vie_Character = HP; // on stocke spd dans m_vitesse
				}

				if (word == "Defense")
				{
					int Defense = 0;
					while (getline(iss, word, '\t'))
					{
						if (word != "")
							break;
					}
					std::stringstream sstream(word);;
					sstream >> Defense;
					creation_Character->m_defense_Character = Defense; // on stocke spd dans m_vitesse
					
				}

				if (word == "Dodge")
				{
					float Dodge = 0.0f;
					while (getline(iss, word, '\t'))
					{
						if (word != "")
							break;
					}
					std::stringstream sstream(word);;
					sstream >> Dodge;
					creation_Character->m_val_esquive_Character = Dodge; // on stocke spd dans m_vitesse
					
				}

				if (word == "Agilite")
				{
					int Agilite = 0;
					while (getline(iss, word, '\t'))
					{
						if (word != "")
							break;
					}
					std::stringstream sstream(word);;
					sstream >> Agilite;
					creation_Character->m_agilite_Character = Agilite; // on stocke spd dans m_vitesse
					
				}

				if (word == "Special")
				{
					float Special = 0.0f;
					while (getline(iss, word, '\t'))
					{
						if (word != "")
							break;
					}
					std::stringstream sstream(word);;
					sstream >> Special;
					creation_Character->m_priorite_Character = Special; // on stocke spd dans m_vitesse
					
				}

				if (word == "EndCharacter")
				{
					
					res_Character.push_back(creation_Character);
				}
			}
		}
	}
	else
	{
		std::cout << "impossible d'ouvrir le fichier character.jdc \n";
		return res_Character;
	}

	c.close();
	return res_Character;
};

std::vector<created_Weapon*> parsing::parsed_Weapon()
{
	std::vector<created_Weapon*> res_Weapon;
	std::ifstream w("weapons.jdc"); // Ouverture du fichier
	created_Weapon* creation_Weapon = NULL;

	if (w.is_open())
	{
		std::string line2;
		std::string word2;
		while (getline(w, line2))
		{
			std::stringstream iss(line2); // Transforme la ligne en flux.
			while (getline(iss, word2, '\t')) //Tant que la ligne n'est pas parcourue de \t en \t jusqu'à la fin, on lit les mots.
			{
				if (word2 == "") //Si le "mot" est vide.
					continue; //On passe à la prochaine \t.

				if (word2 == "Weapon") //Si le mot est "Weapon"
				{
					creation_Weapon = new created_Weapon(); //On crée une nouvelle arme.
				}

				if (word2 == "Nom")
				{
					while (getline(iss, word2, '\t'))
					{
						if (word2 != "")
							break;
					}
					creation_Weapon->m_nom_Weapon = word2; //L'arme prend le mot comme nom.
				}

				if (word2 == "Type")
				{
					while (getline(iss, word2, '\t'))
					{
						if (word2 != "")
							break;
					}
					if (word2 == "Baton")
					{
						creation_Weapon->m_classe_Weapon = "Baton";
					}
					if (word2 == "Epee")
					{
						creation_Weapon->m_classe_Weapon = "Epee";
					}
					if (word2 == "Arc")
					{
						creation_Weapon->m_classe_Weapon = "Arc";
					}
					if (word2 == "Dague")
					{
						creation_Weapon->m_classe_Weapon = "Dague";
					}
				}

				if (word2 == "HP")
				{
					int HP = 0;
					while (getline(iss, word2, '\t'))
					{
						if (word2 != "")
							break;
					}
					std::stringstream sstream(word2);;
					sstream >> HP;
					creation_Weapon->m_hp_Weapon = HP; // on stocke HP dans m_hp_Weapon
				}

				if (word2 == "Cout")
				{
					int Cout = 0;
					while (getline(iss, word2, '\t'))
					{
						if (word2 != "")
							break;
					}
					std::stringstream sstream(word2);;
					sstream >> Cout;
					creation_Weapon->m_cost_Weapon = Cout; // on stocke spd dans m_vitesse
				}

				if (word2 == "Intelligence")
				{
					int Intelligence = 0;
					while (getline(iss, word2, '\t'))
					{
						if (word2 != "")
							break;
					}
					std::stringstream sstream(word2);;
					sstream >> Intelligence;
					creation_Weapon->m_intelligence_Weapon = Intelligence; // on stocke spd dans m_vitesse
				}

				if (word2 == "Critique")
				{
					float Critique = 0.0f;
					while (getline(iss, word2, '\t'))
					{
						if (word2 != "")
							break;
					}
					std::stringstream sstream(word2);;
					sstream >> Critique;
					creation_Weapon->m_critique_Weapon = Critique; // on stocke spd dans m_vitesse
				}

				if (word2 == "Degat")
				{
					float Degat = 0.0f;
					while (getline(iss, word2, '\t'))
					{
						if (word2 != "")
							break;
					}
					std::stringstream sstream(word2);;
					sstream >> Degat;
					creation_Weapon->m_degat_Weapon = Degat; // on stocke Degat dans m_degat_Weapon
				}

				if (word2 == "Fleche")
				{
					int Fleche = 0;
					while (getline(iss, word2, '\t'))
					{
						if (word2 != "")
							break;
					}
					std::stringstream sstream(word2);;
					sstream >> Fleche;
					creation_Weapon->m_arrow_Weapon = Fleche; // on stocke spd dans m_vitesse
				}

				if (word2 == "Durabilite")
				{
					int Durabilite = 0;
					while (getline(iss, word2, '\t'))
					{
						if (word2 != "")
							break;
					}
					std::stringstream sstream(word2);;
					sstream >> Durabilite;
					creation_Weapon->m_durabilite_Weapon = Durabilite; // on stocke Durabilite dans m_durabilite_Weapon
				}

				if (word2 == "Agilite")
				{
					int Agilite = 0;
					while (getline(iss, word2, '\t'))
					{
						if (word2 != "")
							break;
					}
					std::stringstream sstream(word2);;
					sstream >> Agilite;
					creation_Weapon->m_agilite_Weapon = Agilite; // on stocke Durabilite dans m_durabilite_Weapon
				}

				if (word2 == "Attack")
				{
					int Attack = 0;
					while (getline(iss, word2, '\t'))
					{
						if (word2 != "")
							break;
					}
					std::stringstream sstream(word2);;
					sstream >> Attack;
					creation_Weapon->m_attaque_Weapon = Attack; // on stocke Durabilite dans m_durabilite_Weapon
				}

				if (word2 == "Defense")
				{
					int Defense = 0;
					while (getline(iss, word2, '\t'))
					{
						if (word2 != "")
							break;
					}
					std::stringstream sstream(word2);;
					sstream >> Defense;
					creation_Weapon->m_defense_Weapon = Defense; // on stocke Defense dans m_defense_Weapon
				}
				
				if (word2 == "EndWeapon")
				{
					std::cout << "  " << std::endl;
					res_Weapon.push_back(creation_Weapon);
				}
			}
		}
	}
	else
	{
		std::cout << "impossible d'ouvrir le fichier weapons.jdc \n";
	}
	w.close();
	return res_Weapon;
};
