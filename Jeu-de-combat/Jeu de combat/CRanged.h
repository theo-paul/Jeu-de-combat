#pragma once
#include "utils.h"

class CRanged
{
protected:
	int m_consommable;

	CRanged();

public:
	CRanged(int consommable);
	virtual ~CRanged();
};
