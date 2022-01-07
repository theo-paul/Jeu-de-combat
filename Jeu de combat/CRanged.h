#pragma once
#include <stdlib.h>
#include <stdio.h>

class CRanged
{
protected:
	int m_consommable;

	CRanged();

public:
	CRanged(int consommable);
	virtual ~CRanged();
};
