#include "../INCLUDE/tariff.h"
#include<iomanip>

void Tariff :: setPlanID(int p_id)
{
    m_planID=p_id;
}
void Tariff :: setTariffID(int id)
{
    m_tariffID=id;
}
void Tariff ::setTariffType(string type)
{
   m_tariffType=type;
}

void Tariff ::setLocalRate(float rate)
{
    m_localRate=rate;
}
void Tariff ::setNationalRate(float rate)
{
    m_nationalRate=rate;
}
void Tariff ::setGulfRate(float rate)
{
    m_gulfRate=rate;
}
void Tariff ::setAfricanRate(float rate)
{
    m_africanRate=rate;
}
void Tariff ::setAsianRate(float rate)
{
    m_asianRate=rate;
}
void Tariff ::setrestOfTheWorldRate(float rate)
{
    m_restOfTheWorldRate=rate;
}
   
int Tariff::getTariffID()
{
    return m_tariffID;
    }
int Tariff::getPlanID()
{
    return m_planID;
}
string Tariff::getTariffType()
{
    return m_tariffType;
}
float Tariff::getLocalRate()
{
    return  m_localRate;
}
float Tariff::getNationalRate()
{
    return m_nationalRate;
}
float Tariff::getGulfRate()
{
    return m_gulfRate;
}
float Tariff::getAfricanRate()
{
    return m_africanRate;
}
float Tariff::getAsianRate()
{
    return m_asianRate;
}
float Tariff::getRestOfTheWorldRate()
{
    return m_restOfTheWorldRate;
}


