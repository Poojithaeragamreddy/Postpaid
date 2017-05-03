#ifndef _TARIFF_H_
#define _TARIFF_H_
#include<iostream>
#include<vector>
using namespace std;
class Tariff {

private:
    int m_planID;
    int m_tariffID;
    string m_tariffType;
    float m_localRate;
    float m_nationalRate;
    float m_restOfTheWorldRate;
    float m_gulfRate;
    float m_africanRate;
    float m_asianRate;
    

public:

    void setPlanID(int);
    void setTariffID(int);
    void setTariffType(string);
    void setLocalRate(float);
    void setNationalRate(float);
    void setGulfRate(float);
    void setAfricanRate(float);
    void setAsianRate(float);
    void setrestOfTheWorldRate(float);
    
 
    int getPlanID();
    int getTariffID();
    string getTariffType();
    float getLocalRate();
    float getNationalRate();
    float getGulfRate();
    float getAfricanRate();
    float getAsianRate();
    float getRestOfTheWorldRate();
    


};

#endif

