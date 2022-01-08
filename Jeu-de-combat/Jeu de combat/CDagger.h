#pragma once
#include "utils.h"

class CDagger : public CMelee
{
protected:
	int m_utilisation;

	CDagger();

public:
	CDagger(int utilisation);
	virtual ~CDagger();
};