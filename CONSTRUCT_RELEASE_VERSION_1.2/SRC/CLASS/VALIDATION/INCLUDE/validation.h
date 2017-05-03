#ifndef _VALIDATION_H_
#define _VALIDATION_H_
#include<iostream>
#include<string>
#include "../../UDSTRLIB/INCLUDE/udstrlib.h"
using namespace std;
class Validation
{
 
  public:
   bool isValidName(string);
   bool isValidNumber(string);
   bool isValidGender(string);
   bool isValidAddress(string);  
   bool isValidMobile(string);    
   bool isValidEmail(string);
   bool isValidDOB(int,int,int);
   bool isValidTariffType(string& p_tariffType);
   bool isValidPassportNumber(string& p_PassportNumberNumber);
   bool isValidDriverLicenseNumber(string& p_DriverLicenceNumber);
   bool isValidDate(string& p_date);
	bool isValidDigitWithDecimal(string& p_str);
	bool isValidDateOfBirth(string& p_date);
	bool isValidDigit(string& p_str);
	bool isValidEmailChar(string& p_s);
	bool isValidEmailAddress(string& p_email);
   bool isValidChar(string& p_str);
   bool isValidLeapYear(string& p_Year);
   
   
};


#endif
