#pragma once
#include "utils.h"

class CSword : public CMelee
{
protected:
	int m_utilisation;

	CSword();

public:
	CSword(int utilisation);
	virtual ~CSword();
};