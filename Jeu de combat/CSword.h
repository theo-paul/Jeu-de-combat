#pragma once
#include "CWeapons.h"
#include "CMelee.h"
#include <random>

class CSword : public CMelee
{
protected:
	int m_utilisation;

	CSword();

public:
	CSword(int utilisation);
	virtual ~CSword();
};