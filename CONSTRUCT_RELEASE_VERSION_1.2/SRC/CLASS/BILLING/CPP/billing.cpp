#include "./../INCLUDE/billing.h"

int Billing :: getConnectionID()
{
    return m_connectionID;
}
int Billing ::  getBillID()
{
    return m_billID;
}
string Billing :: getDueDate()
{
    return m_dueDate;
}
string Billing :: getDate()
{
    return m_date;
}
int Billing :: getAmount()
{
    return m_amount;
}
int Billing :: getStatus()
{
    return m_status;
}

void Billing :: setConnectionID(int p_id)
{
    m_connectionID = p_id;
}
void Billing :: setBillID(int p_billID)
{
    m_billID =p_billID;
}
void Billing :: setDate(string p_date)
{
    m_date=p_date;
}
void Billing :: setDueDate(string p_date)
{
    m_dueDate=p_date;
}
void Billing :: setAmount(int p_amount)
{
    m_amount=p_amount;
}    
void Billing :: setStatus(int p_status)
{
    m_status = p_status;
}


