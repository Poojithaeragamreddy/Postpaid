#include<iostream>
#include<cstdlib>
#include "./../INCLUDE/udstrlib.h"
using namespace std;

string UDStrLib::intToString(int& p_iVal) {
	int l_iVal = p_iVal;
	ostringstream l_temp;
	l_temp << l_iVal;
	return l_temp.str();
}
string UDStrLib :: floatToString(float& p_fVal)
 {
 float l_fVal = p_fVal;
 ostringstream temp;
 temp<<l_fVal;
 return temp.str();
 }
 string UDStrLib :: doubleToString(double& p_dVal)
 {
 float l_dVal = p_dVal;
 ostringstream temp;
 temp<<l_dVal;
 return temp.str();
 }
 string UDStrLib :: longToString(long& p_lVal)
 {
 long l_lVal = p_lVal;
 ostringstream temp;
 temp<<l_lVal;
 return temp.str();
 }
int UDStrLib::stringToInt(string& p_strVal) {
	string l_strVal = p_strVal;
	return atoi(l_strVal.c_str());
}

 float UDStrLib :: stringToFloat(string& p_strVal)
 {
 string l_strVal = p_strVal;
 return strtod(l_strVal.c_str(),0);
 }
 double UDStrLib :: stringToDouble(string& p_strVal)
 {
 string l_strVal = p_strVal;
 return strtod(l_strVal.c_str(),0);
 }
 
