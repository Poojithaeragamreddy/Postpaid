#include "./../INCLUDE/logincontroller.h"
#include "./../../../CLASS/LOGIN/INCLUDE/login.h"
#include "./../../../MODEL/LOGINMODEL/INCLUDE/model.h"
#include "./../../../VIEW/MAINVIEW/INCLUDE/mainview.h"
#include "./../../../VIEW/LOGINVIEW/INCLUDE/loginview.h"
#include "./../../MANAGERCONTROLLER/INCLUDE/controlmanager.h"
#include "./../../CRCONTROLLER/INCLUDE/crcontroller.h"

string LoginController::startLogin() 
{
	LoginModel model;
	LoginView loginui;
	MainView mainui;
	string username;
	string password;
	string designation;
	username = loginui.getUserName();
	password = loginui.getPassWord();
	designation = loginui.getDesignation();
	Login login(password, username, designation);
	int status = model.verifyLogin(login);
	if (status == 0)
	 {
          mainui.displayMessage(" Login Success\n\n Welcome to QWE -Postpaid\n\n");
		if (designation == "manager") 
                {
			ManagerController c;
			c.showManagerMenu();
		}
		else if (designation == "cr")
                {
			CustomerRepresentativeController c;
			c.customerRepresentativeMenu();
		}
          }
	if (status < 0) 
	{
		if (status == -1)

		{
			mainui.displayMessage("Invalid Username or Password");
			mainui.displayMessage("enter valid username or password");
			return startLogin();
		}
		else if(status== -2)
		{
			mainui.displayMessage("Invalid Designation");
                        mainui.displayMessage("Enter valid Designation");
                        return startLogin();
        	}
   
          }   
}

