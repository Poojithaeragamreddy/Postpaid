#ifndef _CRCONTROLLER_H_
#define _CRCONTROLLER_H_

#include "./../../../CLASS/CONNECTION/INCLUDE/connection.h"
#include "./../../../VIEW/CRVIEW/INCLUDE/crview.h"
#include "./../../../MODEL/CRMODEL/INCLUDE/crmodel.h"
#include "./../../../CLASS/CUSTOMER/INCLUDE/customer.h"
#include "./../../../CLASS/BILLING/INCLUDE/billing.h"
#include "./../../../CLASS/CALLLOG/INCLUDE/calllog.h"

using namespace std;
class CustomerRepresentativeController
{
    public:
    void customerRepresentativeMenu();
	void customerRegistration() {
		CustomerRepresentativeView v;
		Customer c;
		CustomerRepresentativeController cont;
		c = v.registerCustomer();
		CustomerRepresentativeModel m;
		m.insertData(c);
	}
    void updateCustomer();
    void viewCustomer();
    void viewAllCustomers();
    void setConnection();
    void viewConnectionDetails();
    void viewConnectionList();
    void callRegistration();
    void deactivateConnection();
    void generateBill();
    void payBill();
};
#endif
