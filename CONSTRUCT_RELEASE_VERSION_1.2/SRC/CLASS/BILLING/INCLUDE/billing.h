#ifndef _BILLING_H_
#define _BILLING_H_
#include <iostream>
using namespace std;

class Billing
{
    int m_connectionID;
    int m_billID;
    string m_date;
    string m_dueDate;
    int m_amount;
    int m_status;
    public:
    int getConnectionID();
    int getBillID();
    string getDueDate();
    string getDate();
    int getAmount();
    int getStatus();

    void setConnectionID(int);
    void setBillID(int);
    void setDueDate(string);
    void setDate(string);
    void setAmount(int);
    void setStatus(int);

};
#endif

