#include "utils.h"

CSword::CSword()
{
	m_utilisation = (std::rand() / RAND_MAX) * 3 + 2;
}

CSword::CSword(int utilisation)
{
	m_utilisation = utilisation;
}

CSword::~CSword()
{

}