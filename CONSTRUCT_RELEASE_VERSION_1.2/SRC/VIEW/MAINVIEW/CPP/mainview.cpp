#include<iostream>
#include<iomanip>
#include "./../INCLUDE/mainview.h"

int MainView::getOption(void) {
	int l_opt;
	cout << "\033[22;31m " << endl;
	cout << setw(20)
			<< "               *************************************************************************        "
			<< endl;
	cout << "\033[01;39m" << endl;

	cout << "\033[22;32m" << endl;
	cout << setw(20)
			<< "              ***************      QWE TELECOME COMPANY-POSTPAID       ****************         "
			<< endl;
	cout << "\033[01;39m" << endl;

	cout << "\033[22;31m" << endl;
	cout << setw(20)
			<< "              *************************************************************************         "
			<< endl;
	cout << "\033[01;39m" << endl;

	cout << setw(20) << " 1.login\n";
	cout << setw(20) << " 2.exit \n";
	cout << "Enter your choice:";
	cin >> l_opt;

	return l_opt;
}
void MainView::displayMessage(string p_msg) {
	cout << setw(20) << endl << p_msg << endl;
}

