#pragma once
#include "utils.h"

class CBow : protected CRanged
{
protected:
	int m_fleche;

	CBow();
	CBow(int fleche);
	virtual ~CBow();
public:
	
};
