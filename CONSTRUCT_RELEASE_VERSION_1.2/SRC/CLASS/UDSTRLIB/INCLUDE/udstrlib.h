#ifndef _UDSTRLIB_H_
#define _UDSTRLIB_H_
#include<iostream>
#include<string>
#include<sstream>
using namespace std;
class UDStrLib {
	public:
	string intToString(int&);
	string longToString(long& p_lVal);
	 string doubleToString(double& p_dVal);
	 string floatToString(float& p_fVal);
	 float stringToFloat(string& p_strVal);
	 double stringToDouble(string& p_strVal);
	int stringToInt(string& p_strVal);
};
#endif
