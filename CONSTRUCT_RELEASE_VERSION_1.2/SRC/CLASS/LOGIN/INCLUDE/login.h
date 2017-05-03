#ifndef _LOGIN_H_
#define _LOGIN_H_
#include <string>
using namespace std;
class Login {
public:
	string m_username;
	string m_password;
	string m_designation;
	Login();
	Login(string, string, string);
	~Login();
};
#endif

