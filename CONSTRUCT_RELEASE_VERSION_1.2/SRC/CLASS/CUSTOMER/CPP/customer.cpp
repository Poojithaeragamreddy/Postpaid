#include "./../INCLUDE/customer.h"
#include "./../../STRINGLIB/INCLUDE/stringlib.h"

int Customer :: getID()
{
    return m_CustomerID;
}
string Customer :: getName()
{
    return m_CustomerName;
}
string Customer :: getAddress()
{
    return m_CustomerAddress;
}
string Customer :: getDateOfBirth()
{
    return m_customerDateOfBirth;
}
string Customer :: getGender()
{
    return m_customerGender;
}
string Customer :: getProof()
{
    return m_customerProof;
}
string Customer :: getEmailID()
{
    return m_emailID;
}

string Customer :: getMobile()
{
    return m_customerMobile;
}

void Customer :: setID(int p_id)
{
    m_CustomerID = p_id;
}
void Customer :: setName(string p_name)
{
    m_CustomerName=p_name;
}
void Customer :: setAddress(string p_address)
{
    m_CustomerAddress=p_address;
}
void Customer :: setDateOfBirth(string p_dob)
{
    m_customerDateOfBirth=p_dob;
}
void Customer :: setEmailID(string p_mail)
{
    m_emailID=p_mail;

} 
void Customer :: setGender(string p_gen)
{
     m_customerGender=p_gen;
}
void Customer :: setProof(string p_proof)
{
    m_customerProof=p_proof;
}
void Customer :: setMobile(string  p_num)
{
    m_customerMobile = p_num;
}

