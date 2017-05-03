#include "./../INCLUDE/main.h"
#include<cstdlib>

int main()
{

  MainView main;
  int op;
    
     op=main.getOption();
     if(op==1)
      {
         
       LoginController l;
       l.startLogin();
       }

      if(op==2)
       {
        exit(0);
       }       


  return 0; 
}
