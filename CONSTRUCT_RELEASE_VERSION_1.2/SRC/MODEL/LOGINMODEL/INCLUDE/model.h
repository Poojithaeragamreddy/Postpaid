#ifndef _LOGIN_MODEL_H_
#define _LOGIN_MODEL_H_
#include "./../../../CLASS/LOGIN/INCLUDE/login.h"
#include "./../../../VIEW/MAINVIEW/INCLUDE/mainview.h"

class LoginModel {
	int m_connectStatus;
public:
	LoginModel();
	~LoginModel();
	int verifyLogin(Login&);
};

#endif

