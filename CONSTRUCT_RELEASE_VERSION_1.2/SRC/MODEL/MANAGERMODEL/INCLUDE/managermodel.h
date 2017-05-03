#ifndef _MANAGER_MODEL_H_
#define _MANAGER_MODEL_H_
#include "./../../../CLASS/TARIFF/INCLUDE/tariff.h"
#include "./../../../VIEW/MANAGERVIEW/INCLUDE/managerview.h"
#include "./../../../CONTROLLER/MANAGERCONTROLLER/INCLUDE/controlmanager.h"
#include "./../../../CLASS/BONUS/INCLUDE/bonus.h"
#include "./../../../CLASS/STRINGLIB/INCLUDE/stringlib.h"
#include <vector>
#include <iostream>
using namespace std;
class ManagerModel {
	public:
    int createTariff(Tariff,int,int);
    int deleteTariff(int,int);
    int validBonusID(int); 
    vector<Tariff> viewTariff();
    int validPlanTariffID(int,int);
    int validPlanID(int);
    int updateLocalCallcost(int,int,float);
    int updateNationalCallCost(int,int,float);
    int updateGulfCallcost(int,int,float);
    int updateAfricanCallCost(int,int,float);
    int updateAsianCallCost(int,int,float);
    int updateOthersCallCost(int,int,float);
    int createBonus(Bonus,int );
    int deleteBonus(int);
    vector<Bonus> viewBonus();
    int updateLocalCalls(int,int);
    int updateInternationalCalls(int,int);
    int updateNationalCalls(int,int);
    int updateRental(int,int);
    };
#endif
