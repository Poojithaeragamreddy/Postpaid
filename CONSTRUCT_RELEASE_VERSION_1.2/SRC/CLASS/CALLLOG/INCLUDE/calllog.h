#ifndef _CALLLOG_H_
#define _CALLLOG_H_
#include <iostream>
using namespace std;

class Calllog
{
    int m_connectionID;
    float m_callCost;
    float m_callRate;
    int m_callDuration;
    string m_callType;
    string m_callDestination;
    //char m_call_time[11];
    string  m_callDate;
    int m_status;
    public:
  
    int getConnectionID();
    string getDate();
    float getCallCost();
    float getCallRate();
    int getCallDuration();
    string getCallType();
    string getCallDestination();
    int getStatus();    
    void setConnectionID(int);
    void setDate(string);
    void setCallCost(float);
    void setCallRate(float);
    void setCallDuration(int);
    void setCallType(string);
    void setCallDestination(string);
    void setStatus(int);
};
#endif

