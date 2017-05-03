#include<iostream>
#include "../INCLUDE/connection.h"

//Set Methods

void Connection :: setID(int p_id)
{
    m_customerID = p_id;
}
void Connection :: setName(string p_name)
{
    m_customerName=p_name;
}
void Connection :: setAddress(string p_address)
{
    m_customerAddress=p_address;
}
void Connection :: setStatus(int p_status)
{
    m_connectionStatus = p_status;
}
void Connection :: setConnectionID(int p_id)
{
    m_connectionID = p_id;
}
void Connection :: setPlanID(int p_id)
{
    m_planID = p_id;
}
void Connection :: setDate(string p_date)
{
    m_date=p_date;
}

//Get Methods
int Connection :: getPlanID()
{
    return m_planID;
}
int Connection :: getID()
{
    return m_customerID;
}
string Connection :: getName()
{
    return m_customerName;
}
string Connection :: getAddress()
{
    return m_customerAddress;
}
int  Connection :: getConnectionID()
{
    return m_connectionID;
}
int Connection :: getStatus()
{
    return m_connectionStatus;
}

string Connection :: getDate()
{
    return m_date;
}

