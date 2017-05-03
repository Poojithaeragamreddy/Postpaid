#include<iostream>
#ifndef _CONNECTION_H_
#define _CONNECTION_H_
#include "../../../CLASS/CUSTOMER/INCLUDE/customer.h"
using namespace std;
class Connection 
{
    int  m_connectionID;
    int m_connectionStatus;
    int m_customerID;
    string m_customerName;
    string m_customerAddress;
    int m_planID;
    string m_date;
    public:
    
    int getPlanID();
    int getID();
    string getName();
    string getAddress();
    int getConnectionID();
    int getStatus();
    string getDate();
    void  setID(int );
    void setPlanID(int);
    void setName(string );
    void setAddress(string );
    void setStatus(int );
    void  setConnectionID(int);
    void setDate(string);
};
#endif
