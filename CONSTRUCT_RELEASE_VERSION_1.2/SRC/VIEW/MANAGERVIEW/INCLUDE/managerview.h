#ifndef _MANAGER_VIEW_H_
#define _MANAGER_VIEW_H_

#include "./../../../CLASS/TARIFF/INCLUDE/tariff.h"
#include "./../../../CLASS/BONUS/INCLUDE/bonus.h"
#include "./../../../CLASS/UDSTRLIB/INCLUDE/udstrlib.h"
#include "./../../../CLASS/VALIDATION/INCLUDE/validation.h"

using namespace std;
class ManagerView {
public:
	int managerMenu();
	void viewTariffs(vector<Tariff> tvector_obj);
	int deleteTariff();
	Tariff createTariff();
	int enterPlanID();
	int enterTariffID();
	int updateTariff();
	float updateLocalCallcost();
	float updateNationalCallcost();
	float updateGulfCallcost();
	float updateAfricanCallcost();
	float updateAsianCallcost();
	float updateOthersCallcost();
	Bonus createBonus();
	int updateBonus();
	int deleteBonus();
	void viewBonus(vector<Bonus> bvector_obj);
	int updateLocalCalls();
	int updateNationalCalls();
	int updateInternationalCalls();
	int updateRental();
	void displayString(string);
};
#endif
