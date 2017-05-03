#include "./../../UDSTRLIB/INCLUDE/udstrlib.h"
#include "./../INCLUDE/validation.h"
bool Validation :: isValidEmailAddress(string& p_EmailID)
{

	if(isValidEmailChar(p_EmailID))
	{
		int l_FlagAt = -1;
		int l_FlagDot = -1;

		unsigned int l_Length = p_EmailID.length();

		for(unsigned int i = 0; i < l_Length; i++)
		{
			if(p_EmailID[i] == '@') 
				l_FlagAt = (int)i;
			else if(p_EmailID[i] == '.')
				l_FlagDot = (int)i;
		}

		if(l_FlagAt <= 1 || l_FlagDot <= 4)
		{
			return false;
		}

		if( l_FlagAt > l_FlagDot || !(l_FlagDot > ++(++l_FlagAt) ) )
		{
			return false;
		}

		return !(l_FlagDot >= ((int)l_Length-1)); 
	}
	else
	{
		return false;
	}
}
bool Validation::isValidTariffType(string& p_tariffType)
{
   if((p_tariffType=="mtom")||(p_tariffType=="mtol")||(p_tariffType=="sms"))
   {
    return true;
   }
  else
  {
	return false;
  }
}
bool Validation::isValidDigitWithDecimal(string& p_s)
{
	if(p_s.find_first_not_of(".0123456789") != string::npos)
	{
		return false;
	}
	else
	{
		return true;
	}

}
bool Validation::isValidName(string name)
{
    int k;
    int a,i;
    int l=0;
    char c;
    int max=20; 
    while(1)
    {
      cin.ignore();
       string strName;
      
     strName=name;
     
     k=0;
     l=strName.length();
     for(i=0;i<l;i++)
     {
                     a=strName[i];
                     if((a<65&&a!=32)||(a>90&&a<97)||a>122)
                     {
                                                    k++;
                                                    return 0;
 						    break;
                     }
                     
     }
     if(k==0)
     {
             return 1;
             break;
     }



}
}

bool Validation :: isValidEmailChar(string& p_s)
{
	string l_ss(1,p_s.at(0));
	if(isValidChar(l_ss))
	{ 
		if( p_s.find_first_not_of("@abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789.") != string::npos)
		{
			return false;
		}
		else
		{
			return true;
		}
	}
	else
	{
		return false;
	}
}
bool Validation::isValidGender(string g)
{
  string cGen;
  cGen=g;
  int len = cGen.length();
  int k=0;
 
  if(len == 1)
  {
     if(cGen=="m"||cGen=="M"||cGen=="f"||cGen=="F") 
             {
                       return 1;
                 }
             else
             {
                   return 0;
             }
   }

   else
   {
                 return 0;
   }
}
bool Validation::isValidAddress(string addrs)
{
     int k=0;
     int l=0;
     while(1)
     {
       cin.ignore();
      string address;
      address=addrs;
        
     l=address.length();    
     if(l>30)
     {
              return 0; 
              continue;        
     }
       return 1;
       break;
      }
}
bool Validation::isValidMobile(string mobl)
{
   int k=0;
   int l=0;
     while(1)
     {
      cin.ignore();
     string mobile_number;
     mobile_number=mobl;
        
     
             l=mobile_number.length();   
             if(l>10||l<10)
             {
             k++;
             return 0;
             continue;
                                     
                                          
               }
             for(int i=0;i<l;i++)
             {
                             
                           int a=mobile_number[i];
                             if(a<48||a>57)
                             {
                    k++;                                             return 0;
                    break;
                             }
             }
             if(k==0)
             {
                          return 1;
                          break;

             }

}  
}
bool Validation::isValidEmail(string mail)
{
      int k=0;
        int l=0;
   while(1)
   {
           cin.ignore();
    string email;
    email=mail;
       
             l=email.length();
              int d=0,a=0,sp,b=0;
               if(email[0]<65||(email[0]>90&&email[0]<97)||email[0]>122)
                              {
                                                   k++;
                                                    return 0;
  continue;                           }
               if(email[l-1]<65||(email[l-1]>90&&email[l-1]<97)||email[l-1]>122)
                              {
                                                   k++;
                                                   return 0;
continue;
                               }

               for(int i=0;i<l;i++)
               {
                               if(email[i]=='.')
                               {
                                  d++;
                               }
                               if(email[i]=='@')
                               {
                                   if(email[i+1]=='.')
                                    {
                                                   k++;
                                                   return 0;
break;
                                       }
                                   
                                   
                                   for(int j=i;j<l;j++)
                                   {
                                     if(email[j]=='.') 
                                                                b++; 
                                   }                  
                                     a++;
                               }
                              if(email[i]==32)
                             {
                                                   k++;
                                                   return 0;
break;

                             }
               }
               if(d==0||a!=1||b==0||b>2)
               {
                k++; 
                 return 0;
                 continue;
		      
               }
             if(k==0)
             {
               return 1;
               break;
              }
        }
}
bool Validation::isValidDOB(int d,int m,int y)
{
  while(1)
  {
  int day,month,year;
  cin.ignore();
  day=d;
  month=m;
  year=y;
  
   
   int  k=0;
    
   while(1)
   {               
     if(year>1994||year<1950)
     {
         k++;
         return 0;
         
     }
                                     
     if(month>12||month<1)
      {
          k++;
          return 0;
      }
      
     if(month==02)
       {
         if((year%4==0&&year%100!=0)||(year%400==0&&year%100==0))
         {
            if(day>29||day<1)
            {
                       k++;
                       return 0;
                       break;                    
            }
         
         }
         else if(day>28||day<1)
         {
                       k++;
                      return 0;
                       break;
         }
       }
       if(month==1||month==3||month==5||month==7||month==8||month==10||month==12)
       {
             if(day<1||day>31)
             {
                       k++;
                     return 0;
                     break;
             }
       }
       else// if(cus[u].nMonth==4||cus[u].nMonth==6||cus[u].nMonth==9||cus[u].nMonth==11) 
       {
       if(day<1||day>30)
       {
                     k++;
                     return 0;
                     break;
       }
       }
        break;
       }
       if(k==0)
       {
                return 1;
                  break;
        }
}               
     
}
bool Validation::isValidDateOfBirth(string& p_date)
{

        string l_date = p_date;
        if(!isValidDate(l_date))
                return false;

        string delimiter = "-";
        string str[2];
        int i=0;
        size_t pos = 0;
        string token;
        while (i<3 && ((pos = l_date.find(delimiter)) != string::npos))
        {
                str[i] = l_date.substr(0, pos);
                l_date.erase(0, pos + delimiter.length());
                i++;
        }
        str[i] = l_date;
	UDStrLib ud;
        int l_Year = ud.stringToInt(str[2]);
        int l_Month = ud.stringToInt(str[1]);
        int l_Day = ud.stringToInt(str[0]);

        time_t t = time(0);   // get time now
        struct tm * now = localtime( & t );

        int l_CurrentYear = now->tm_year+1900;
        int l_CurrentMonth = now->tm_mon +1;
        int l_CurrentDay = now->tm_mday;

        if( l_Year < l_CurrentYear)
        {
                return true;
        }
        else if((l_Month < l_CurrentMonth) && (l_Year == l_CurrentYear))
        {
                return true;
        }
 else if((l_Day <= l_CurrentDay) && (l_Month == l_CurrentMonth))
        {
                return true;
        }
        else
        {
                return false;
        }

}

bool Validation::isValidDate(string& p_date)
{
        string l_date = p_date;
        string delimiter = "-";
        string str[2];
        int i=0;
        size_t pos = 0;
        string token;
	UDStrLib ud;
        while (i<3 && ((pos = l_date.find(delimiter)) != string::npos))
        {
                str[i] = l_date.substr(0, pos);
                l_date.erase(0, pos + delimiter.length());
                i++;
        }
        str[i] = l_date;
        if(str[2].length()!=4)
                return false;

        if(isValidDigit(str[0]) && isValidDigit(str[1]) && isValidDigit(str[2]))
        {
                int l_Year = ud.stringToInt(str[2]);
                int l_Month = ud.stringToInt(str[1]);
                int l_Day = ud.stringToInt(str[0]);
                unsigned short l_MonthLength[]={31,28,31,30,31,30,31,31,30,31,30,31};
                if(l_Year < 1900 || l_Year > 2100)
                {
                        return false;
                }
                if (l_Year<1 || l_Month<1 || l_Day<1 || (l_Month>12 || l_Month<1))
                        return false;
                if (isValidLeapYear(str[2]) && l_Month==2)
                        l_MonthLength[1]++;
                if (l_Day>l_MonthLength[l_Month-1])
                        return false;
                return true;
        }
        else
        {
                return false;
        }

}


bool Validation::isValidDriverLicenseNumber(string& p_DriverLicenceNumber)
{
        string l_ss(2,p_DriverLicenceNumber.at(0));
       
        if(isValidChar(l_ss) && p_DriverLicenceNumber.length()==16)
        {
                if( p_DriverLicenceNumber.substr(2,14).find_first_not_of("0123456789") != string::npos)
                {
                        return false;
                }
                else
                {
                        return true;
                }
        }
        else
 {
                return false;
        }
}

bool Validation::isValidPassportNumber(string& p_PassportNumber)
{
        string l_ss(1,p_PassportNumber.at(0));
        
        if(isValidChar(l_ss) && p_PassportNumber.length()==8)
        {
                
                if( p_PassportNumber.substr(1,7).find_first_not_of("0123456789") != string::npos)
                {
                        return false;
                }
                else
                {
                        return true;
                }
        }
        else
 {
                return false;
        }
}

bool Validation::isValidDigit(string& p_s)
{
	if(p_s.find_first_not_of("0123456789") != string::npos)
	{
		return false;
	}
	else
	{
		return true;
	}

}

bool Validation::isValidChar(string& p_s)
{
	if(p_s.find_first_not_of("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ") != string::npos)
	{
		return false;
	}
	else
	{
		return true;
	}
}
bool Validation::isValidLeapYear(string& p_Year)
{
	string l_sYear;
	UDStrLib ud;
        int l_Year = ud.stringToInt(l_sYear);
        return (!(l_Year%4));
}
