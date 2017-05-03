#include<iostream>
#include<cstdlib>
#include "./../INCLUDE/crcontroller.h"

void CustomerRepresentativeController :: customerRepresentativeMenu()
{
    int choice;
    CustomerRepresentativeView crview;
    CustomerRepresentativeController crcont;
do
    {
    choice = crview.showCustomerRepresentativeMenu();
    switch(choice)
    {
        case 1 :  crcont.customerRegistration();
                  break;
        case 2 :  crcont.updateCustomer();
                  break;
        case 3 :  crcont.viewCustomer();
                  break;
        case 4 :  crcont.viewAllCustomers();
                  break;
        case 5 :  crcont.setConnection();
                  break;
        case 6 :  crcont.viewConnectionDetails();
                  break;
        case 7 :  crcont.viewConnectionList();
                  break;
        case 8 :  crcont.callRegistration();
                  break;
        case 9:  crcont.deactivateConnection();
                  break;
        case 10 : crcont.generateBill();
                  break;
        case 11 : crcont.payBill();
                  break;
        case 12 : exit(0);
                  break;
        default : cout <<"Invalid Choice !" <<endl;
    }
  }while(1);    
}

void CustomerRepresentativeController::updateCustomer()
{
    string l_str;
    CustomerRepresentativeView crview;
    CustomerRepresentativeModel crmodel;
    Customer cust;
    string  l_num;
    int l_id = crview.enterCustID();
    if(crmodel.validID(l_id) == 0)
    {
        int l_choice = crview.updateOption();
        if(l_choice==4)
        {
            l_num = crview.updatePhoneNumber();
            crmodel.updatePhone(l_id,l_num);
        }
        else
        {   
        l_str=crview.updateCustomer(l_choice);
        crmodel.updateData(l_id,l_choice,l_str);
        }
    }
    else
    {
        crview.display("Invalid ID !");
    }
}

void CustomerRepresentativeController :: viewAllCustomers()
{
     CustomerRepresentativeModel crmodel;
     vector<Customer> vec_cust;
     CustomerRepresentativeView crview;
     vec_cust = crmodel.viewCustomerList();
     crview.viewAllCustomersDetails(vec_cust);
     crview.display("");
}
void CustomerRepresentativeController :: viewCustomer()
{
     CustomerRepresentativeModel crmodel;
     Customer cust;
     CustomerRepresentativeView crview;
     int l_custID = crview.enterCustID();
     if(crmodel.validID(l_custID) == 0)
     {
         cust = crmodel.viewDetails(l_custID);
         crview.viewCustomerDetails(cust);
         crview.display("");
     }
     else
     {
        crview.display("\tInvalid ID !");
        
     }
}

void CustomerRepresentativeController :: setConnection()
{
    CustomerRepresentativeView crview;
    CustomerRepresentativeModel crmodel;
    Customer cust;
    Connection con;
    int l_custID = crview.enterCustID();
    if(crmodel.validID(l_custID) == 0 )
    {
        cust = crmodel.viewDetails(l_custID);
        con = crview.giveConnection(cust);
        if(crmodel.validPlanID(con.getPlanID()) == 0)
        {
            crmodel.addConnection(con);
        }
        else
        {
            crview.display("\tInvalid Plan ID");
        }
    }
    else
    {
        crview.display("\tInvalid Number" );
    }
}

void CustomerRepresentativeController :: viewConnectionDetails()
{
    CustomerRepresentativeView crview;
    CustomerRepresentativeModel crmodel;
    Connection conn;
    int  l_connectionID = crview.enterConnectionID();
    if(crmodel.validConnectionID(l_connectionID) == 0)
    {
        conn = crmodel.viewConnectionDetails(l_connectionID);
        crview.viewConnectionDetails(conn);
        crview.display("");
    }
    else
    {
        crview.display("\tInvalid Number" );
    }
}
void CustomerRepresentativeController :: viewConnectionList()
{
     CustomerRepresentativeModel crmodel;
     vector<Connection> vect_connection;
     CustomerRepresentativeView crview;
     vect_connection = crmodel.viewConnectionsList(); 
     crview.viewAllConnectionDetails(vect_connection);
     crview.display("");
}
void CustomerRepresentativeController :: callRegistration()
{
    CustomerRepresentativeView crview;
    CustomerRepresentativeModel crmodel;
    Connection conn;
    Calllog log;
    int l_connectionID = crview.enterConnectionID();
    if(crmodel.validConnectionID(l_connectionID) == 0)
    {
        log = crview.registerCall(l_connectionID);
        crmodel.enterCall(log);
        
    }
    else
    {
        crview.display("\tInvalid Number" );
    }
}
void CustomerRepresentativeController ::deactivateConnection() 
{
    CustomerRepresentativeView crview;
    CustomerRepresentativeModel crmodel;
    Connection conn;
    int l_connectionID = crview.enterConnectionID();
    if(crmodel.validConnectionID(l_connectionID) == 0)
    {
        crmodel.deactivate(l_connectionID);
    }
    else
    {
        crview.display("\tInvalid Number" );
    }
}
void CustomerRepresentativeController :: generateBill()
{
    CustomerRepresentativeView crview;
    CustomerRepresentativeModel crmodel;
    Connection conn;
   int l_connectionID = crview.enterConnectionID();
    if(crmodel.validConnectionID(l_connectionID) == 0)
    {   
        crmodel.generateBill(l_connectionID);
    }
    else
    {
        crview.display("\tInvalid Number" );
    }
}

void CustomerRepresentativeController :: payBill()
{
    CustomerRepresentativeView crview;
    CustomerRepresentativeModel crmodel;
    Connection conn;
    Billing bill;
    int l_connectionID = crview.enterConnectionID();
    if(crmodel.validConnectionID(l_connectionID) == 0)
    {   
        bill = crmodel.viewBill(l_connectionID);
        crview.viewBill(bill);
        int l_billID = bill.getBillID();
        while(1)
        {
        int l_amount = bill.getAmount();
        int l_paid = crview.enterAmount();
        if(l_paid >= l_amount)
        {
            crmodel.payBill(l_billID);
            break;
        }
        else
        {
            cout << "\tAtleast bill amount should be paid"<<endl;
        }
        }
    }
     else
      {
        crview.display("\tInvalid Number" );
       }


}
