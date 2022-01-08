#pragma once
#include "utils.h"

class CSword : public CMelee
{
protected:
	int m_utilisation;

	CSword();
	CSword(int utilisation);
	virtual ~CSword();
public:
	
};