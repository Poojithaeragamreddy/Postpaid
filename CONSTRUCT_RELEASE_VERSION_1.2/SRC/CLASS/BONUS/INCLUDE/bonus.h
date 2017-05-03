#ifndef _BONUS_H_
#define _BONUS_H_
#include<iostream>
#include<vector>
using namespace std;
class Bonus {
	int m_planID;
	int m_local;
	int m_national;
	int m_international;
	int m_rental;

public:
	void setPlanID();
	void setPlanID(int);
	void setLocalCalls(int);
	void setNationalCalls(int);
	void setInternationalCalls(int);
	void setRental(int);

	int getPlanID();
	int getLocalCalls();
	int getNationalCalls();
	int getInternationalCalls();
	int getRental();

};
#endif

