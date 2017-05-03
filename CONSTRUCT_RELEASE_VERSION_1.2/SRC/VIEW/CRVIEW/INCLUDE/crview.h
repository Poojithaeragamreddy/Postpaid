#ifndef _CR_VIEW_
#define _CR_VIEW_
#include <vector>
#include <sstream>
#include "../../../CLASS/CONNECTION/INCLUDE/connection.h"
#include "../../../CLASS/VALIDATION/INCLUDE/validation.h"
#include "../../../CLASS/BILLING/INCLUDE/billing.h"
#include "../../../CLASS/CUSTOMER/INCLUDE/customer.h"
#include "../../../CLASS/CALLLOG/INCLUDE/calllog.h"
#include "../../../CLASS/UDSTRLIB/INCLUDE/udstrlib.h"

class CustomerRepresentativeView {
public:
	int showCustomerRepresentativeMenu();
	int enterCustID();
	int enterConnectionID();
	string enterPhoneNumber();
	Customer registerCustomer();
	string updateCustomer(int);
	string updatePhoneNumber();
	int updateOption();
	void viewAllCustomersDetails(vector<Customer> vectCustomer);
	void viewCustomerDetails(Customer);
	Connection giveConnection(Customer);
	void viewConnectionDetails(Connection);
	void viewAllConnectionDetails(vector<Connection> vectConnection);
	Calllog registerCall(int);
	void viewBill(Billing);
	int enterAmount();
	void display(string);
};
#endif

