#pragma once
#include "utils.h"

class CMelee
{
protected:
	int m_durabilite;

	CMelee();

public:
	CMelee(int durabilite);

	virtual ~CMelee();
};