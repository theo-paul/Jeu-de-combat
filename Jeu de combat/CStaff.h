#pragma once
#include "CWeapons.h"
#include "CRanged.h"

class CStaff : public CRanged
{
protected:
	int m_soin;

	CStaff();

public:
	CStaff(int soin);
	virtual ~CStaff();
};