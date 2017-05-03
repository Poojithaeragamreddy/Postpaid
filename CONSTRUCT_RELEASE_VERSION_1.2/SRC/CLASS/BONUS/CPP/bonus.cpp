#include "./../INCLUDE/bonus.h"
#include<iomanip>

void Bonus::setPlanID()
{
cout<<"	"<<"Enter Plan ID: ";
cin>>m_planID;
}
void Bonus::setPlanID(int id)
{
m_planID=id;
}
void Bonus::setLocalCalls(int p_localCalls)
{
m_local=p_localCalls;
}
void Bonus::setNationalCalls(int p_nationalCalls)
{
m_national=p_nationalCalls;
}
void Bonus::setInternationalCalls(int p_internationalCalls)
{
m_international=p_internationalCalls;
}
void Bonus::setRental(int p_rent)
{
m_rental=p_rent;
}
int Bonus::getPlanID()
{
return m_planID;
}
int Bonus::getLocalCalls()
{
return m_local;
}
int Bonus::getNationalCalls()
{
return m_national;
}
int Bonus::getInternationalCalls()
{
return m_international;
}
int Bonus::getRental()
{
return m_rental;
}
