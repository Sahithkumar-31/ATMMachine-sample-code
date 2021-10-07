#include <iostream>
#include <string>
#include <stdlib.h>
#include <conio.h>
using namespace std;


class atm
{   private:
	long int ac_no;
	long int pin;
	string name;
	int balance;
	
	public:
	void data(long int ac_no_s,long int pin_s,string name_s,int balance_s)
	{
		ac_no = ac_no_s;
		pin = pin_s;
		name =name_s;
		balance= balance_s;
	}
	
	long int gac()
	{
		return ac_no;
	}
	
	long int gpin()
	{
		return pin;
	}
   	
   	string gname()
   	{
   		return name;
	   }
	   
	
   	void v_bal()
   	{
   		cout<<"\nyour Balance is :"<< balance;
   		}
   	
	void w_bal()
	{  int w;
	cout<<"\n Enter the balance for withdrawl: ";
	cin>>w;
	if(w>0 && w<balance)
	{
	balance=balance-w;
		cout<<"\n Collect your cash \n remaining balance is: "<< balance;
		   }
	else
	{
		cout<<"\nwrong input or insufficiant balance\n";
	}
		   }	      	
};


int main()
{
	atm m1,m2,m3,M;
	long int a,p ,c;
	
	m1.data(12345,54321,"Sahith Kumar",90000);
	m2.data(67890,98760,"Rohith Kumar",100000);
	m3.data(94401,58560,"Kumar",35000):
	
	do{
		
	cout<< "Enter your act_no: ";
	cin>>a;
	cout<<"Enter our pin: ";
	cin>>p;
	system("cls");
	
	if(a==m1.gac() && p== m1.gpin())
	{
		M=m1;
    }
    
    else if(a==m2.gac() && p== m2.gpin())
    {
    	M=m2;
	}
else
{
	cout<<"wrong input //Try again\\";
	_getch();
	system("cls");
	continue;
}
while(1){
cout<<"1) your details\n2) withdrawl\n3) check your balance\n4)Exit\n";
cin>>c;


switch(c)
{
	case 1:
		{
			cout<<"Your name : "<<M.gname();
			cout<<"\nAccount number : "<<M.gac();
		    _getch();
			system("cls");
			continue;
		}
	case 2:
	{
		M.w_bal();
		_getch();
			system("cls");
			continue;
		
		}	
    
	case 3:
	{
		M.v_bal();
		_getch();
			system("cls");
			continue;
		
			}
					
	
}
  if(c==4)
  {
  	break;
  }
}
  if(c==4)
  {
  	break;
  }
}while(true);


	
	
	return 0;
	
}
