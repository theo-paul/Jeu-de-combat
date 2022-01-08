#include "utils.h"



CMage::CMage()
{
	m_mana_Character = 0;
	m_intelligence_Character = 0;
}

CMage::CMage(int mana_Character, int intelligence_Character)
{
	mana_Character = m_mana_Character * 10;
	m_intelligence_Character = intelligence_Character;
}

CMage::~CMage()
{

}