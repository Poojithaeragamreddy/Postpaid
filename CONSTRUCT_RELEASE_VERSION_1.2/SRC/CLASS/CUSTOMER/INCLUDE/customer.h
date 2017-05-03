#ifndef _CUSTOMER_H_
#define _CUSTOMER_H_
#include <iostream>
using namespace std;
class Customer {
	string m_CustomerName;
    string m_CustomerAddress;
    int m_CustomerID;
    string m_emailID;
    string m_customerDateOfBirth;
    string m_customerGender;
    string m_customerProof;
    string  m_customerMobile;
    public:
    int getID();
    string getName();
    string getAddress();
    string getDateOfBirth();
    string getGender();
    string getProof();
    string getEmailID();
    string  getMobile();
    
    void setID(int);
    void setGender(string);
    void setDateOfBirth(string);
    void setEmailID(string);
    void setName(string);
    void setAddress(string);
    void setProof(string);
    void setMobile(string);
};
#endif
