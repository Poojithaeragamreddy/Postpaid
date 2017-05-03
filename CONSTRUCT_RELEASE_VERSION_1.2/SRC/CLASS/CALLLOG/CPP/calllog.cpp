#include "./../INCLUDE/calllog.h"


int  Calllog :: getConnectionID()
{
    return m_connectionID;
}
string Calllog :: getDate()
{
    return m_callDate;
}
float Calllog :: getCallCost()
{
    return m_callCost;
}
float Calllog :: getCallRate()
{
    return m_callRate;
}
int Calllog ::  getCallDuration()
{
    return m_callDuration;
}
string Calllog :: getCallType()
{
     return m_callType;
}
string Calllog :: getCallDestination()
{
    return m_callDestination;
}
int Calllog :: getStatus()
{
    return m_status;
}    
void Calllog :: setConnectionID(int id)
{
    m_connectionID =id;
}

void Calllog :: setDate(string date)
{
    m_callDate=date;
}   

void  Calllog :: setCallCost(float cost)
{
    m_callCost = cost;
}
void  Calllog :: setCallRate(float rate)
{
   m_callRate = rate;
}
void Calllog :: setCallDuration(int duration)
{
    m_callDuration =duration;
}
void Calllog :: setCallType(string type)
{
    m_callType=type;
}
void Calllog :: setCallDestination(string destination)
{
    m_callDestination=destination;
}
void Calllog :: setStatus(int status)
{
    m_status = status;
}

