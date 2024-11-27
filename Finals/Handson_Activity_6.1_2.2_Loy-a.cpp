#include<iostream>
#include <cmath>
#include <cstdlib>
#include <cstdlib>

using namespace std;

double Celsius (double F)
{
  double C;
  C=(F-32*5/9);
  cout<<"\nConversion from farenheit to celsius:"<<endl; 
  cout<<C<<"C"<<endl;
	
	return C;
}

double Fahrenheit (double C)
{
  double F;
  F=(C*1.8+32);
   cout<<"\nConversion from celsius to fahrenheit:"<<endl;
   cout<<F<<"F"<<endl;

	return F;
}

int main()
{
	int choice;
	double F,C;
	bool constant= true;

    while (constant)
    {
	cout<<"\nPress 1 to convert Fahrenheit to Celsius"<<endl;
	cout<<"Press 2 to convert Celsius to Fahrenheit"<<endl;
	cin>> choice;
	
	switch (choice)
	 {
	 
	 case 1:	
	  {
    	cout<<"\nInput a value for farenheit"<<endl;
    	cin>>F;
	    Celsius (F);	
	     break;
	  }	
	 
	 case 2:	
	  {
	  	
    	cout<<"\nInput a value for celsius"<<endl;
    	cin>>C;
	    Fahrenheit (C);	
	     break;
	  }	
	 
	  default:
		{
			cout<<"\ninvalid input";
			break;
		}
      }
	 }
    
    return 0;
}
