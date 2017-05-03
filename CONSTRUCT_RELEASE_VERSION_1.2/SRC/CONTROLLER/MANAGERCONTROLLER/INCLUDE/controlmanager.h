#ifndef _MANAGER_CONTROLLER_H_
#define _MANAGER_CONTROLLER_H_
#include "./../../../VIEW/MANAGERVIEW/INCLUDE/managerview.h"
class ManagerController {
public:
	void showManagerMenu();
	void createTariff();
	void deleteTariff();
	void viewTariff();
	void updateTariff();
	void updateLocalCallcost();
	void updateNationalCallcost();
	void updateGulfCallcost();
	void updateAfricanCallcost();
	void updateAsianCallcost();
	void updateOthersCallcost();
	void createBonus();
	void deleteBonus();
	void viewBonus();
	void updateBonus();
	void updateLocalCalls();
	void updateNationalCalls();
	void updateInternationalCalls();
	void updateRental();
};
#endif
