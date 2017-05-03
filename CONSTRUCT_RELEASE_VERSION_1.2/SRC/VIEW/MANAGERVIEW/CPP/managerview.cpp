#include <vector>
#include<iostream>
#include<iomanip>
#include<string>
#include "./../INCLUDE/managerview.h"


using namespace std;
int ManagerView::managerMenu() {
	int l_option;

	cout << "\t\t\t\tMANAGER OPERATIONS" << endl;
	cout << "	" << "1.Create tariff" << endl;
	cout << "	" << "2.Update tariff" << endl;
	cout << "	" << "3.View tariff" << endl;
	cout << "	" << "4.Delete tariff" << endl;
	cout << "	" << "5.create Bonus" << endl;
	cout << "	" << "6.Update Bonus" << endl;
	cout << "	" << "7.View Bonus" << endl;
	cout << "	" << "8.deletebonus" << endl;
	cout << "\t" << "9.Exit" << endl;
	cout << "	" << "Enter Your Choice:";
	cin >> l_option;
	return l_option;

}

Tariff ManagerView::createTariff() {
	Tariff tar;
	Validation v;
	UDStrLib ud;
	int l_plan_id;
	int l_tariff_id;
	string l_tariff_type;
	float l_local_rate;
	float l_national_rate;
	float l_rest_of_world_rate;
	float l_gulf_rate;
	float l_african_rate;
	float l_asian_rate;
	cout << "	" << "enter tariff type: "<<endl<<"mtom"<<endl<<"mtol"<<endl<<"sms"<<endl;
	cin >> l_tariff_type;
	while (!v.isValidTariffType(l_tariff_type))
        {
		cout << "        " << "Enter Valid Tariff Type: ";
		cin >> l_tariff_type;
	}
	cout << "	" << "enter local rate: ";
	cin >> l_local_rate;
	string l_str1 = ud.floatToString(l_local_rate);
        while (!(v.isValidDigitWithDecimal(l_str1)))
        {
                cout << "        " << "Enter Valid local rate : ";
                cin >> l_local_rate;
         }
	cout << "	" << "enter national rate: ";
	cin >> l_national_rate;
	string l_str2 = ud.floatToString(l_national_rate);
	while (!(v.isValidDigitWithDecimal(l_str2)))
        {
                cout << "        " << "Enter Valid national rate : ";
                cin >> l_national_rate;
        }
	cout << "	" << "enter gulf rate: ";
	cin >> l_gulf_rate;
	string l_str3 = ud.floatToString(l_gulf_rate);
	while (!(v.isValidDigitWithDecimal(l_str3)))
        {
                cout << "        " << "Enter Valid gulf rate : ";
                cin >> l_gulf_rate;
        }
	cout << "	" << "enter african rate: ";
	cin >> l_african_rate;
	string l_str4 = ud.floatToString(l_african_rate);
        while (!(v.isValidDigitWithDecimal(l_str4)))
        {
                cout << "        " << "Enter Valid african rate : ";
                cin >> l_african_rate;
        }
	cout << "	" << "enter asian rate:";
	cin >> l_asian_rate;
	string l_str5 = ud.floatToString(l_asian_rate);
	while (!(v.isValidDigitWithDecimal(l_str5)))
        {
                cout << "        " << "Enter Valid asian rate : ";
                cin >> l_asian_rate;
        }
	cout << "	" << "enter rest of the countries rate: ";
	cin >> l_rest_of_world_rate;
	string l_str6 = ud.floatToString(l_rest_of_world_rate);
	while (!(v.isValidDigitWithDecimal(l_str6)))
        {
                cout << "        " << "Enter Valid rest of world rate : ";
                cin >> l_rest_of_world_rate;
        }
	tar.setTariffType(l_tariff_type);
	tar.setLocalRate(l_local_rate);
	tar.setNationalRate(l_national_rate);
	tar.setGulfRate(l_gulf_rate);
	tar.setAfricanRate(l_african_rate);
	tar.setAsianRate(l_asian_rate);
	tar.setrestOfTheWorldRate(l_rest_of_world_rate);
	return tar;
}

int ManagerView::deleteTariff() {
	int l_id;
	cout << "	" << "Enter plan_id: ";
	cin >> l_id;

	return l_id;
}

void ManagerView::viewTariffs(vector<Tariff> vec_tariff) {
	int l_sizeVectorTariff = vec_tariff.size();
	for (int i = 0; i < l_sizeVectorTariff; i++) {
		cout << "	" << "plan id      :";
		cout << vec_tariff[i].getPlanID() << endl;
		cout << "	" << "tariff id    :";
		cout << vec_tariff[i].getTariffID() << endl;
		cout << "	" << "tariff type  :";
		cout << vec_tariff[i].getTariffType() << endl;
		cout << "	" << "local cost   :";
		cout << vec_tariff[i].getLocalRate() << "paise" << endl;
		cout << "	" << "national cost:";
		cout << vec_tariff[i].getNationalRate() << "paise" << endl;
		cout << "	" << "gulf cost    :";
		cout << vec_tariff[i].getGulfRate() << "paise" << endl;
		cout << "	" << "african cost :";
		cout << vec_tariff[i].getAfricanRate() << "paise" << endl;
		cout << "	" << "asian cost   :";
		cout << vec_tariff[i].getAsianRate() << "paise" << endl;
		cout << "	" << "others cost  : ";
		cout << vec_tariff[i].getRestOfTheWorldRate() << "paise" << endl;
		// cout<<"plan name    :";
		cout << endl;
	}
}

int ManagerView::enterPlanID() {
	Tariff tar;
	int l_planID;
	cout << "	" << "enter plan id: ";
	cin >> l_planID;
	tar.setPlanID(l_planID);

	int l_id = tar.getPlanID();
	return l_id;
}
int ManagerView::enterTariffID() {
	Tariff tar;
	int l_tariffID;
	cout << "	" << "enter tariff id: ";
	cin >> l_tariffID;
	tar.setTariffID(l_tariffID);
	int l_id = tar.getTariffID();
	return l_id;
}
int ManagerView::updateTariff() {
	int l_option;
	cout << "	" << "1.Update local rate" << endl;
	cout << "	" << "2.Update national rate" << endl;
	cout << "	" << "3.Update gulf rate" << endl;
	cout << "	" << "4.Update african rate" << endl;
	cout << "	" << "5.Update asian rate" << endl;
	cout << "	" << "6.Update other countries rate" << endl;
	cout << "	" << "7.Exit" << endl;
	cout << "	" << "Enter Your Choice: ";
	cin >> l_option;
	return l_option;
}

float ManagerView::updateLocalCallcost() {
	Validation vald;
	UDStrLib udstr;
	string new_local_callcost;
	cout << "   " << "Enter new local Callm Cost : ";
	cin >> new_local_callcost;
	while (!vald.isValidDigitWithDecimal(new_local_callcost)) {
		cout << "        " << "Enter Valid Local Call Cost : ";
		cin >> new_local_callcost;
	}
	return udstr.stringToFloat(new_local_callcost);
}
float ManagerView::updateNationalCallcost() {
	Validation vald;
	UDStrLib udstr;
	string l_newNationalCallCost;
	cout << "   " << "Enter national local callcost: ";
	cin >> l_newNationalCallCost;
	while (!vald.isValidDigitWithDecimal(l_newNationalCallCost)) {
		cout << "        " << "Enter Valid national Call Cost : ";
		cin >> l_newNationalCallCost;
	}
	return udstr.stringToFloat(l_newNationalCallCost);
}
float ManagerView::updateGulfCallcost() {
	string l_newGulfCallcost;
	cout << "   " << "Enter new gulf callcost: ";
	cin >> l_newGulfCallcost;
	Validation vald;
	UDStrLib udstr;
	while (!vald.isValidDigitWithDecimal(l_newGulfCallcost)) {
		cout << "        " << "Enter Valid Gulf Call Cost : ";
		cin >> l_newGulfCallcost;
	}
	return udstr.stringToFloat(l_newGulfCallcost);
}
float ManagerView::updateAfricanCallcost() {
	string l_newAfricanCallCost;
	cout << "   " << "Enter new african callcost: ";
	cin >> l_newAfricanCallCost;
	Validation vald;
	UDStrLib udstr;
	
	while (!vald.isValidDigitWithDecimal(l_newAfricanCallCost)) {
		cout << "        " << "Enter Valid African Call Cost : ";
		cin >> l_newAfricanCallCost;
	}
	return udstr.stringToFloat(l_newAfricanCallCost);
}
float ManagerView::updateAsianCallcost() {
	string l_newAsianCallCost;
	cout << "   " << "Enter new asian callcost: ";
	cin >> l_newAsianCallCost;
	Validation v;
	UDStrLib ud;
	
	while (!v.isValidDigitWithDecimal(l_newAsianCallCost)) {
		cout << "        " << "Enter Valid Asian CallCost : ";
		cin >> l_newAsianCallCost;
	}
	return ud.stringToFloat(l_newAsianCallCost);
}
float ManagerView::updateOthersCallcost() {
	string l_newOthersCallCost;
	cout << "   " << "Enter new other countries callcost: ";
	cin >> l_newOthersCallCost;
	Validation vald;
	UDStrLib udstr;
	
	while (!vald.isValidDigitWithDecimal(l_newOthersCallCost)) {
		cout << "        " << "Enter Valid Other Countries CallCost : ";
		cin >> l_newOthersCallCost;
	}
	return udstr.stringToFloat(l_newOthersCallCost);
}

void ManagerView::displayString(string p_str) {
	char l_d;
	cout << p_str << endl;
	cout << "\t\t" << "  press  any to continue  : ";
	cin.clear();
	cin.ignore(10000, '\n');
	cin.get(l_d);

}
Bonus ManagerView::createBonus() {
	Bonus bon;
	int l_local;
	int l_national;
	int l_international;
	int l_rental;
	cout << "	" << "enter number of free local calls: ";
	cin >> l_local;
	cout << "	" << "enter number of free national calls: ";
	cin >> l_national;
	cout << "	" << "enter number of free international calls: ";
	cin >> l_international;
	cout << "	" << "Enter rental: ";
	cin >> l_rental;
	bon.setLocalCalls(l_local);
	bon.setNationalCalls(l_national);
	bon.setInternationalCalls(l_international);
	bon.setRental(l_rental);
	return bon;
}
int ManagerView::deleteBonus() {
	int l_planID;
	cout << "	" << "Enter plan_id: ";
	cin >> l_planID;

	return l_planID;
}
void ManagerView::viewBonus(vector<Bonus> vectBonus) {
	int l_sizeVectorBonus = vectBonus.size();
	for (int i = 0; i < l_sizeVectorBonus; i++)

	{
		cout << "	" << "plan id                           :";
		cout << vectBonus[i].getPlanID() << endl;
		cout << "	" << "number of free local calls        :";
		cout << vectBonus[i].getLocalCalls() << endl;
		cout << "	" << "number of free national calls     :";
		cout << vectBonus[i].getNationalCalls() << endl;
		cout << "	" << "number of free international calls:";
		cout << vectBonus[i].getInternationalCalls() << endl;
		cout << "	" << "monthly rental                    :";
		cout << vectBonus[i].getRental() << endl;
		cout << endl;

	}
}
int ManagerView::updateBonus() {
	int l_option;
	cout << "	" << "1.Update number of local calls" << endl;
	cout << "	" << "2.Update number of national calls" << endl;
	cout << "	" << "3.Update number of international calls" << endl;
	cout << "	" << "4.Update monthly rental" << endl;
	cout << "	" << "5. Exit";
	cout << "	" << "Enter Your Choice :";
	cin >> l_option;
	return l_option;
}
int ManagerView::updateLocalCalls() {
	int l_newLocalCalls;
	cout << "	" << "Enter number of new local calls: ";
	cin >> l_newLocalCalls;
	return l_newLocalCalls;
}

int ManagerView::updateInternationalCalls() {
	int l_newInternationalCalls;
	cout << "	" << "Enter number of new international calls: ";
	cin >> l_newInternationalCalls;
	return l_newInternationalCalls;
}
int ManagerView::updateNationalCalls() {
	int l_newNationalCalls;
	cout << "	" << "Enter number of new national calls: ";
	cin >> l_newNationalCalls;
	return l_newNationalCalls;
}
int ManagerView::updateRental() {
	int l_newRental;
	cout << "	" << "Enter new monthly rental:";
	cin >> l_newRental;
	return l_newRental;
}

