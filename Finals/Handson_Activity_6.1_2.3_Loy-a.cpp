#include<iostream>
#include <cmath>
#include <cstdlib>
#include <cstdlib>

using namespace std;

double USDollars (double D)
{
  double P;
  P=(D*55.88);
  cout<<"\nConversion from dollars to pesos:"<<endl; 
  cout<<P<<" pesos"<<endl;
	
	return P;
}

double PhilippinePeso (double P)
{
  double D;
  D=(P/55.88);
   cout<<"\nConversion from pesos to dollars:"<<endl;
   cout<<D<<" US dollars"<<endl;

	return D;
}

int main()
{
	int choice;
	double D,P;
	bool constant= true;

    while (constant)
    {
	cout<<"\nPress 1 to convert US dollars to Philippine pesos"<<endl;
	cout<<"Press 2 to convert Philippine pesos to US dollars"<<endl;
	cin>> choice;
	
	switch (choice)
	 {
	 
	 case 1:	
	  {
    	cout<<"\nInput a value for US dollars"<<endl;
    	cin>>D;
	    USDollars (D);	
	     break;
	  }	
	 
	 case 2:	
	  {
	  	
    	cout<<"\nInput a value for Philippine pesos"<<endl;
    	cin>>P;
	    PhilippinePeso (P);	
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
