#include<iostream>
#include "../INCLUDE/crview.h"

int CustomerRepresentativeView::showCustomerRepresentativeMenu() {
	string choice;
	Validation v;
	UDStrLib ud;
	cout << "\t\t\t\tCUSTOMER REPRESENTATIVE " << endl;
	cout << "\t\t 1. Customer Registration" << endl;
	cout << "\t\t 2. Update Customer Details" << endl;
	cout << "\t\t 3. View Customer Details" << endl;
	cout << "\t\t 4. View Customer List" << endl;
	cout << "\t\t 5. Give a Connection" << endl;
	cout << "\t\t 6. View Connection Details" << endl;
	cout << "\t\t 7. View Connection list" << endl;
	cout << "\t\t 8. Register a Call" << endl;
	cout << "\t\t 9. Deactivate Connection" << endl;
	cout << "\t\t10. Generate Bill" << endl;
	cout << "\t\t11. Pay Bill" << endl;
	cout << "\t\t12. Exit" << endl;
	cout << "\tEnter you choice :";
	cin >> choice;
	while(!v.isValidDigit(choice))
    {
              cout << "Enter Valid  choice (1-12):";
                cin >> choice;
    }
	return ud.stringToInt(choice);
	
}

void CustomerRepresentativeView::display(string msg) {
	cout << "\t" << msg << endl;
	char l_d;
	cout << "\tPress Enter to Continue";
	cin.clear();
	cin.ignore(10000, '\n');
	cin.get(l_d);
}

Customer CustomerRepresentativeView::registerCustomer() {
	Customer cust;
	int l_ch;
	string l_a[2];
	int l_i = 0;
	string l_word;
	Validation vald;
	string l_customerName;
	string l_customerGender;
	string l_customerDateOfBirth;
	string l_emailID;
	string l_customerAddress;
	string l_customerProof;
	string l_customerMobile;
	cout << "\tEnter Details of the customer " << endl;
	cout << "\tName :";
	cin >> l_customerName;
	while (!(vald.isValidName(l_customerName))) {
		cout << "\tName :";
		cin >> l_customerName;
	}
	cout << "\tGender e.g.(m/M/f/F):"<<endl;
	cin >> l_customerGender;
	while (!(vald.isValidGender(l_customerGender))) {
		cout << "\tGender:";
		cin >> l_customerGender;
	}

	cout << "\tDate of Birth e.g.(DD-MM-YYYY)"<<endl;
	cin >> l_customerDateOfBirth;

	while (!(vald.isValidDateOfBirth(l_customerDateOfBirth))) {
		cout << "\tEnter valid date of birth:";
		cin >> l_customerDateOfBirth;
	}

	cout << "\tAddress :";
	cin >> l_customerAddress;
	while (!(vald.isValidAddress(l_customerAddress))) {
		cout << "\t Enter valid address :";
		cin >> l_customerAddress;
	}

	cout << "\tEmail ID :";
	cin >> l_emailID;
	while (!(vald.isValidEmailAddress(l_emailID))) {
		cout << "\tENter valid email id :";
		cin >> l_emailID;
	}

	cout << "\tProof Type :";
	cout << "\t1.passport" << endl;
	cout << "\t2.driving license:" << endl;
	cout << "\tenter choice (1-2)" << endl;
	cin >> l_ch;
	
	/////////
	switch (l_ch) {
	case 1:
		cout << "\tEnter passport number" << endl;
		cin >> l_customerProof;
		while (!(vald.isValidPassportNumber(l_customerProof))) {
			cout << "\tEnter valid passport number" << endl;
			cin >> l_customerProof;
		}
		cust.setProof(l_customerProof);
		break;
	case 2:
		cout << "\tEnter driving license Number" << endl;
		cin >> l_customerProof;
		while (!(vald.isValidDriverLicenseNumber(l_customerProof))) {
			cout << "\tEnter valid driving license Number" << endl;
			cin >> l_customerProof;
		}

		cust.setProof(l_customerProof);
		break;
	default:
		cout << "\tEnter valid choice";
		break;
	}

	cout << "\tMobile Number :";
	cin >> l_customerMobile;
	while (!(vald.isValidMobile(l_customerMobile))) {
		cout << "\t Enter valid mobile number :";
		cin >> l_customerMobile;
	}

	cust.setName(l_customerName);
	cust.setGender(l_customerGender);
	cust.setDateOfBirth(l_customerDateOfBirth);
	cust.setAddress(l_customerAddress);
	cust.setEmailID(l_emailID);
	cust.setMobile(l_customerMobile);

	return cust;
}

Calllog CustomerRepresentativeView::registerCall(int p_connectionID) {
	Calllog log;
	Validation v;
	UDStrLib ud;
	string l_callType;
	string l_callDestination;
	int l_callDuration;
	int l_connectionID = p_connectionID;
	cout << "\tEnter Call Type :";
	cin >> l_callType;
	 while (!v.isValidTariffType(l_callType))
        {
                cout << "        " << "Enter Valid call Type: ";
                cin >> l_callType;
       }
	cout << "\tEnter Call Destination :";
	cin >> l_callDestination;
	while(!(v.isValidName(l_callDestination)))
    {
      cout << "\tEnter valid call destination :";
      cin >> l_callDestination;
    }
	if (l_callType == "sms") {

		l_callDuration = 0;
	} else {
		cout << "\tEnter Call Duration :";
		cin >> l_callDuration;
			string l_stringCallDuration = ud.intToString(l_callDuration);
			
		  while(!(v.isValidDigit(l_stringCallDuration)))
    {
      cout << "\tEnter Call Duration :";
		cin >> l_callDuration;
			string l_stringCallDuration = ud.intToString(l_callDuration);
    }
		  
	}
	log.setConnectionID(l_connectionID);
	log.setCallType(l_callType);
	log.setCallDestination(l_callDestination);
	log.setCallDuration(l_callDuration);
	return log;
}

int CustomerRepresentativeView::enterCustID() {
	int l_custID;
	cout << "\tEnter Customer ID :";
	cin >> l_custID;
	return l_custID;
}
int CustomerRepresentativeView::enterConnectionID() {
	int l_ConnectionID;
	cout << "\tEnter CONNECTION ID :";
	cin >> l_ConnectionID;
	cout << "id is" << l_ConnectionID;
	return l_ConnectionID;
}
string CustomerRepresentativeView::enterPhoneNumber() {
	string l_phoneNumber;
	cout << "\tEnter Phone Number :";
	cin >> l_phoneNumber;
	return l_phoneNumber;
}

int CustomerRepresentativeView::updateOption() {
	int l_choice;
	cout << "\t\t\t\tUpdate Customer" << endl;
	cout << "\t\t1. Customer Name" << endl;
	cout << "\t\t2. Address" << endl;
	cout << "\t\t3. Email ID" << endl;
	cout << "\t\t4. Phone Number" << endl;
	cout << "Enter your choice :";
	cin >> l_choice;
	while(!((l_choice>0)&&(l_choice<5)))/////////////
	{	

		cout << "Enter Valid  choice (1-4):";
		cin >> l_choice;
	}	
	return l_choice;
}

string CustomerRepresentativeView::updateCustomer(int p_choice) {
	string l_str;
    Validation v;
	switch (p_choice) {
	case 1:
		cout << "\tEnter name:";
		//cin.ignore();
		cin >> l_str;
		while(!(v.isValidName(l_str)))
	        {
		      cout << "\tEnter Valid Name :";
		      cin >> l_str;
		    }
		return l_str;
		break;
	case 2:
		cout << "\tEnter Address:";
		cin >> l_str;
		 while(!(v.isValidAddress(l_str)))
		{
	          cout << "\t Enter valid address :";
		  cin >>l_str;
		 }
		return l_str;
		break;
	case 3:
		cout << "\tEnter EmailID:";
		cin >> l_str;
		while(!(v.isValidEmailAddress(l_str)))
	        {
		      cout << "\tENter valid email id(upto 35 characters) :";
		      cin >>l_str;
	        }
		return l_str;
		break;
	default:
		cout << "\tInvalid input";
	}

}

string CustomerRepresentativeView::updatePhoneNumber() {
	Validation v;
	string l_phoneNumber;
	cout << "\tEnter Phone number:";
	cin >> l_phoneNumber;
	while(!(v.isValidMobile(l_phoneNumber)))
      {
        cout << "\t Enter valid mobile number :";
        cin >> l_phoneNumber;
      }
	return l_phoneNumber;
}

void CustomerRepresentativeView::viewAllCustomersDetails(vector<Customer> vectCustomer) 
{
	int sizeVectorCustomer = vectCustomer.size();
	cout
		<< "CUSTOMER ID \t CUSTOMER NAME \t GENDER \t DATE OF BIRTH \t ADDRESS \t EMAIL ID \t PROOF \t MOBILE"
		<< endl;
	if(!sizeVectorCustomer==0)
	{
		for (int i = 0; i < sizeVectorCustomer; i++) {
			cout << vectCustomer[i].getID() << "\t";
			cout << vectCustomer[i].getName() << "\t";
			cout << vectCustomer[i].getGender() << "\t";
			cout << vectCustomer[i].getDateOfBirth() << "\t";
			cout << vectCustomer[i].getAddress() << "\t";
			cout << vectCustomer[i].getEmailID() << "\t";
			cout << vectCustomer[i].getProof() << "\t";
			cout << vectCustomer[i].getMobile() << "\t";
			cout << endl;
		}
	}
	else
	{
		cout<<"Customer Not Yet Registered. "<<endl;
	}
}

void CustomerRepresentativeView::viewCustomerDetails(Customer cust) {

	cout
			<< "CUSTOMER ID \t CUSTOMER NAME \t GENDER \t DATE OF BIRTH \t ADDRESS \t EMAIL ID \t PROOF \t MOBILE"
			<< endl;
	cout << cust.getID() << "\t";
	cout << cust.getName() << "\t";
	cout << cust.getGender() << "\t";
	cout << cust.getDateOfBirth() << "\t";
	cout << cust.getAddress() << "\t";
	cout << cust.getEmailID() << "\t";
	cout << cust.getProof() << "\t";
	cout << cust.getMobile() << "\t";
	cout << endl;
}

void CustomerRepresentativeView::viewConnectionDetails(Connection conn) {

	cout
			<< "CUSTOMER ID \t CUSTOMER NAME \t ADDRESS \t CONNECTION ID \t STATUS \t PLAN ID \t DATE OF CONNECTION"
			<< endl;
	cout << conn.getID() << "\t";
	cout << conn.getName() << "\t";
	cout << conn.getAddress() << "\t";
	cout << conn.getConnectionID() << "\t";
	cout << conn.getStatus() << "\t";
	cout << conn.getPlanID() << "\t";
	cout << conn.getDate();
	cout << endl;
}
void CustomerRepresentativeView::viewAllConnectionDetails(
		vector<Connection> vectConnection) {
	int sizeVectorConnection = vectConnection.size();
	cout
			<< "CUSTOMER ID \t CUSTOMER NAME \t ADDRESS \t CONNECTION ID \t STATUS \t PLAN ID \t DATE OF CONNECTION"
			<< endl;
	for (int i = 0; i < sizeVectorConnection; i++) {
		cout << vectConnection[i].getID() << "\t";
		cout << vectConnection[i].getName() << "\t";
		cout << vectConnection[i].getAddress() << "\t";
		cout << vectConnection[i].getConnectionID() << "\t";
		cout << vectConnection[i].getStatus() << "\t";
		cout << vectConnection[i].getPlanID() << "\t";
		cout << vectConnection[i].getDate() << endl;

	}
}

Connection CustomerRepresentativeView::giveConnection(Customer c) {
	Connection conn;
	int l_customerID;
	string l_customerName;
	string l_customerAdress;
	int l_connectionStatus;
	int l_planID;

	l_customerID = c.getID();
	l_customerName = c.getName();
	l_customerAdress = c.getAddress();
	l_connectionStatus = 1;
	cout  << "\tChoose a Plan :"<<endl<<"1.plan 300"<<endl<<"2.plan 500"<<endl;
      cin >> l_planID;
      while(!(l_planID==1||l_planID==2))
      {
        cout  << "\tInvalid Plan Id!Please enter valid ID :"<<endl<<"1.plan 300"<<endl<<"2.plan 500"<<endl;
      cin >> l_planID;
     }
	conn.setID(l_customerID);
	conn.setName(l_customerName);
	conn.setAddress(l_customerAdress);
	conn.setStatus(l_connectionStatus);
	conn.setPlanID(l_planID);

	return conn;
}
void CustomerRepresentativeView::viewBill(Billing bill) {
	cout << "CONNECTION ID \t BILL ID \t DATE \t DUE DATE \t AMOUNT \t STATUS"
			<< endl;
	cout << bill.getConnectionID() << "\t";
	cout << bill.getBillID() << "\t";
	cout << bill.getDate() << "\t";
	cout << bill.getDueDate() << "\t";
	cout << bill.getAmount() << "\t";
	cout << bill.getStatus();
	cout << endl;
}

int CustomerRepresentativeView::enterAmount() {
	Validation v;
    int l_amount;
    UDStrLib ud;
	cout << "\tEnter Amount :";
	cin >> l_amount;
	string l_str7=ud.intToString(l_amount);
    while((v.isValidDigitWithDecimal(l_str7)))
    {
     cout << "\tPlease enter valid Amount :" ;
     cin >> l_amount;
     break;
    }
	return l_amount;
}
