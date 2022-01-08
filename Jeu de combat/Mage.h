#pragma once
#include "utils.h"

class CMage:protected CCharacter
{
private:
	int m_mana_Character;

protected:
	
	int m_intelligence_Character;


	CMage();
	CMage(int mana_Character, int intelligence_Character);
	virtual ~CMage();


};