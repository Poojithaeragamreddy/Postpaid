#ifndef _CRMODEL_H_
#define _CRMODEL_H_
#include "./../../../VIEW/CRVIEW/INCLUDE/crview.h"
#include "./../../../CLASS/CUSTOMER/INCLUDE/customer.h"
#include "./../../../CLASS/CONNECTION/INCLUDE/connection.h"
#include "./../../../CLASS/CALLLOG/INCLUDE/calllog.h"
#include "./../../../CLASS/BILLING/INCLUDE/billing.h"
#include<iostream>
using namespace std;
class CustomerRepresentativeModel {
 public:
    void insertData(Customer);
    int validID(int);
     int validConnectionID(int);
    int validPlanID(int);
    void updateData(int,int,string);
    void updatePhone(int,string);
    vector<Customer> viewCustomerList();
    Customer viewDetails(int);
    vector<Connection> viewConnectionsList();
    Connection viewConnectionDetails(int);
    void addConnection(Connection);
    void enterCall(Calllog log);
    void deactivate(int);
    void generateBill(int);
    void payBill(int);
    Billing viewBill(int);
};
#endif
