#pragma once
#include "utils.h"

class CDagger : public CMelee
{
protected:
	int m_utilisation;

	CDagger();
	CDagger(int utilisation);
	virtual ~CDagger();

public:
	
};