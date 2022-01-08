#pragma once
#include "utils.h"

class CBow : public CRanged
{
protected:
	int m_fleche;

	CBow();

public:
	CBow(int fleche);
	virtual ~CBow();
};
