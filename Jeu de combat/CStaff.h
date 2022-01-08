#pragma once
#include "utils.h"

class CStaff : public CRanged
{
protected:
	int m_soin;

	CStaff();

public:
	CStaff(int soin);
	virtual ~CStaff();
};