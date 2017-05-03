#include<iostream>
#include<iomanip>
#include "./../INCLUDE/loginview.h"

string LoginView::getUserName(void) {
	string l_username;
	cout << "\tUser Name : ";
	cin >> l_username;

	if (l_username.length() < 6) {
		cout << "\tEnter username with atleast 6 characters";
		cin >> l_username;
	}
	return l_username;
}
string LoginView::getPassWord(void) {
	string l_password;
	l_password = getpass("\tPassword:");
	return l_password;
}

string LoginView::getDesignation(void) {
	string l_designation;
	cout << "\tDesignation:";
	cin >> l_designation;
	return l_designation;
}

