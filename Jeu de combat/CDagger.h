#pragma once
#include "CWeapons.h"
#include "CMelee.h"

class CDagger : public CMelee
{
protected:
	int m_utilisation;

	CDagger();

public:
	CDagger(int utilisation);
	virtual ~CDagger();
};