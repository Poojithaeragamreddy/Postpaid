#include "./../INCLUDE/controlmanager.h"
#include "./../../../VIEW/MANAGERVIEW/INCLUDE/managerview.h"
#include "./../../../MODEL/MANAGERMODEL/INCLUDE/managermodel.h"
#include "./../../../CLASS/TARIFF/INCLUDE/tariff.h"
#include "./../../../CLASS/BONUS/INCLUDE/bonus.h"
#include<iostream>
#include<vector>
#include<iomanip>
#include<cstdlib>

using namespace std;

using namespace std;

void ManagerController::showManagerMenu() {
	ManagerView mgrview;
	ManagerController mgrcontrol;
	int l_choice;
	do {
//system("clear");
		l_choice = mgrview.managerMenu();
		switch (l_choice) {
		case 1:
			mgrcontrol.createTariff();
			break;
		case 2:
			mgrcontrol.updateTariff();
			break;
		case 3:
			mgrcontrol.viewTariff();
			break;
		case 4:
			mgrcontrol.deleteTariff();
			break;
		case 5:
			mgrcontrol.createBonus();
			break;
		case 6:
			mgrcontrol.updateBonus();
			break;
		case 7:
			mgrcontrol.viewBonus();
			break;
		case 8:
			mgrcontrol.deleteBonus();
			break;
		case 9:
			exit(0);
			break;
		default:
			cout << setw(5) << "Invalid Choice" << endl;
			return showManagerMenu();
		}
	} while (l_choice <= 9);
}
void ManagerController::createTariff() {
	ManagerView mgrview;
	Tariff tar;
	Tariff tar2;
	ManagerModel mgrmodel;

	int l_planID = mgrview.enterPlanID();
	int l_tariffID = mgrview.enterTariffID();

	if (mgrmodel.validPlanTariffID(l_planID, l_tariffID) == -2) {

		tar = mgrview.createTariff();
		if (mgrmodel.createTariff(tar, l_planID, l_tariffID) == 0)
			mgrview.displayString("Record added successfully..........");
		else if (mgrmodel.createTariff(tar, l_planID, l_tariffID) == -1)
			mgrview.displayString("Record not added.........");
	} else if (mgrmodel.validPlanTariffID(l_planID, l_tariffID) == 1) {
		mgrview.displayString("Duplicate record can not be inserted");
	} else
		mgrview.displayString("Error occured");
}
void ManagerController::deleteTariff() {
	ManagerView mgrview;
	ManagerModel mgrmodel;

	int p_id = mgrview.enterPlanID();
	int t_id = mgrview.enterTariffID();
	if (mgrmodel.validPlanTariffID(p_id, t_id) == 1) {
		if (mgrmodel.deleteTariff(p_id, t_id) == 1)
			mgrview.displayString("Record deleted successfully..........");
		else if (mgrmodel.deleteTariff(p_id, t_id) == -2)
			mgrview.displayString("Record not found...");
		else if (mgrmodel.deleteTariff(p_id, t_id) == 0)
			mgrview.displayString("Connection error         ");
	} else {
		mgrview.displayString("entered plan id,tariff id does not exists....");
	}

}
void ManagerController::viewTariff() {
	ManagerModel mgrmodel;

	vector<Tariff> vectTariff;

	vectTariff = mgrmodel.viewTariff();
	ManagerView mgrview;

	if (vectTariff.size() != 0) {
		mgrview.viewTariffs(vectTariff);
		mgrview.displayString(" ");
	} else
		mgrview.displayString("Records could not be Fetched........");
}

void ManagerController::updateTariff() {
	ManagerView mgrview;
	ManagerController mgrcont;
	int l_choice;

	do {
		l_choice = mgrview.updateTariff();

		switch (l_choice) {
		case 1:
			mgrcont.updateLocalCallcost();
			break;
		case 2:
			mgrcont.updateNationalCallcost();
			break;
		case 3:
			mgrcont.updateGulfCallcost();
			break;
		case 4:
			mgrcont.updateAfricanCallcost();
			break;
		case 5:
			mgrcont.updateAsianCallcost();
			break;
		case 6:
			mgrcont.updateOthersCallcost();
			break;

		default:
			cout << "	" << "Invalid Choice";
			break;
		}
	} while (l_choice < 7);
}

void ManagerController::updateLocalCallcost() {
	ManagerView mgrview;
	int l_planID = mgrview.enterPlanID();
	float l_newLocalCallCost;
	int l_tariffID = mgrview.enterTariffID();
	ManagerModel mgrmodel;
	if (mgrmodel.validPlanTariffID(l_planID, l_tariffID) == 1) {
		if (mgrmodel.updateLocalCallcost(l_planID, l_tariffID, mgrview.updateLocalCallcost())
				== -2) {
			mgrview.displayString("Record updated successfully...");
		}

	} else {
		cout << "	" << "Invalid Plan ID,Tariff Id" << endl;
	}

}
void ManagerController::updateNationalCallcost() {
	ManagerView mgrview;
	int l_planID = mgrview.enterPlanID();
	int l_tariffID = mgrview.enterTariffID();
	float l_newNationalCallCost;
	ManagerModel mgrmodel;
	if (mgrmodel.validPlanTariffID(l_planID, l_tariffID) == 1) {

		if (mgrmodel.updateNationalCallCost(l_planID, l_tariffID,
				mgrview.updateNationalCallcost()) == -2)
			mgrview.displayString("Record updated successfully");

	}

	else {
		cout << "	" << "Invalid Plan ID" << endl;
	}
}
void ManagerController::updateGulfCallcost() {
	ManagerView mgrview;
	int l_planID = mgrview.enterPlanID();
	int l_tariffID = mgrview.enterTariffID();
	float l_newGulfCallCost;
	ManagerModel mgrmodel;
	if (mgrmodel.validPlanTariffID(l_planID, l_tariffID) == 1) {

		if (mgrmodel.updateGulfCallcost(l_planID, l_tariffID, mgrview.updateGulfCallcost())
				== -2)
			mgrview.displayString("Record updated successfully");
	}

	else {
		cout << "	" << "Invalid Plan ID" << endl;
	}
}
void ManagerController::updateAfricanCallcost() {
	ManagerView mgrview;
	int l_planID = mgrview.enterPlanID();
	int l_tariffID = mgrview.enterTariffID();
	float l_newAfricanCallCost;
	ManagerModel mgrmodel;
	if (mgrmodel.validPlanTariffID(l_planID, l_tariffID) == 1)

	{
		if (mgrmodel.updateAfricanCallCost(l_planID, l_tariffID,
				mgrview.updateAfricanCallcost()) == -2)
			mgrview.displayString("Record updated successfully");
	} else {
		cout << "Invalid Plan ID" << endl;
	}
}

void ManagerController::updateAsianCallcost() {
	ManagerView mgrview;
	int l_planID = mgrview.enterPlanID();
	int l_tariffID = mgrview.enterTariffID();
	float l_newAsianCallCost;
	ManagerModel mgrmodel;
	if (mgrmodel.validPlanTariffID(l_planID, l_tariffID) == 1) {

		if (mgrmodel.updateAsianCallCost(l_planID, l_tariffID, mgrview.updateAsianCallcost())
				== -2)
			mgrview.displayString("Record updated successfully");
	} else {
		cout << "	" << "Invalid Plan ID" << endl;
	}
}
void ManagerController::updateOthersCallcost() {
	ManagerView mgrview;
	int l_planID = mgrview.enterPlanID();
	int l_tariffID = mgrview.enterTariffID();
	float l_newOthersCallcost;
	ManagerModel mgrmodel;
	if (mgrmodel.validPlanTariffID(l_planID, l_tariffID) == 0) {

		if (mgrmodel.updateOthersCallCost(l_planID, l_tariffID, mgrview.updateOthersCallcost())
				== 1)
			mgrview.displayString("Record updated successfully");
	}

	else {
		cout << "	" << "Invalid Plan ID" << endl;
	}
}
void ManagerController::createBonus() {
	ManagerView mgrview;

	Bonus bon;
	Bonus bon2;
	ManagerModel mgrmodel;
	bon2.setPlanID();
	int l_planID = bon2.getPlanID();
	if (mgrmodel.validPlanID(l_planID) == 1) {

		if (mgrmodel.validBonusID(l_planID) == 1) {
			mgrview.displayString("duplicate record cannot be inserted");
		} else if (mgrmodel.validBonusID(l_planID) == -2) {
			bon = mgrview.createBonus();
			if (mgrmodel.createBonus(bon, l_planID) == 1)
				mgrview.displayString("Record added successfully..........");
		}
	} else
		cout << "	" << "Invalid Plan Id";

}
void ManagerController::deleteBonus() {
	int l_planID;
	ManagerView mgrview;
	ManagerModel mgrmodel;
	l_planID = mgrview.enterPlanID();
	if (mgrmodel.validBonusID(l_planID) == 1) {
		if (mgrmodel.deleteBonus(l_planID) == 1)
			mgrview.displayString("Record deleted successfully..........");
		else if (mgrmodel.deleteBonus(l_planID) == -2)
			mgrview.displayString("Record not deleted succssfully...");
		else if (mgrmodel.deleteBonus(l_planID) == 0)
			mgrview.displayString("connection error");
	} else {
		cout << "	" << "Invalid Plan ID";
	}

}
void ManagerController::viewBonus() {
	ManagerModel mgrmodel;

	vector<Bonus> vectBonus;

	vectBonus = mgrmodel.viewBonus();
	ManagerView mgrview;
	if (vectBonus.size() != 0) {

		mgrview.viewBonus(vectBonus);
		mgrview.displayString("");
	} else
		mgrview.displayString("No record found ");
}
void ManagerController::updateBonus() {
	ManagerView mgrview;
	ManagerController mgrcont;
	int l_choice;

	do {
		l_choice = mgrview.updateBonus();

		switch (l_choice) {
		case 1:
			mgrcont.updateLocalCalls();
			break;
		case 2:
			mgrcont.updateNationalCalls();
			break;
		case 3:
			mgrcont.updateInternationalCalls();
			break;
		case 4:
			mgrcont.updateRental();
			break;
		default:
			cout << setw(5) << "Invalid Choice" << endl;
		}
	} while (l_choice < 5);
}
void ManagerController::updateNationalCalls() {
	ManagerView mgrview;
	int l_planID = mgrview.enterPlanID();

	float l_newNationalCalls;
	ManagerModel mgrmodel;
	if (mgrmodel.validBonusID(l_planID) == 1) {

		if (mgrmodel.updateNationalCalls(l_planID, mgrview.updateNationalCalls()) == 1)
			mgrview.displayString("Record updated successfully..........");
	}

	else {
		cout << "	" << "Invalid Plan ID" << endl;
	}
}
void ManagerController::updateLocalCalls() {
	ManagerView mgrview;
	int planid = mgrview.enterPlanID();

	ManagerModel mgrmodel;
	if (mgrmodel.validBonusID(planid) == 1) {

		if (mgrmodel.updateLocalCalls(planid, mgrview.updateLocalCalls()) == 1)
			mgrview.displayString("Record updated successfully..........");
	}

	else {
		cout << "	" << "Invalid Plan ID" << endl;
	}
}
void ManagerController::updateInternationalCalls() {
	ManagerView mgrview;
	int l_planID = mgrview.enterPlanID();

	ManagerModel mgrmodel;
	if (mgrmodel.validBonusID(l_planID) == 1) {

		if (mgrmodel.updateInternationalCalls(l_planID, mgrview.updateInternationalCalls())
				== 1)
			mgrview.displayString("Record updated successfully..........");
	}

	else {
		cout << "	" << "Invalid Plan ID" << endl;
	}
}
void ManagerController::updateRental() {
	ManagerView mgrview;
	int planid = mgrview.enterPlanID();

	ManagerModel mgrmodel;
	if (mgrmodel.validBonusID(planid) == 0) {

		if (mgrmodel.updateRental(planid, mgrview.updateRental()) == 1)
			mgrview.displayString("Record updated successfully..........");
	} else {
		cout << "	" << "Invalid Plan ID" << endl;
	}
}

