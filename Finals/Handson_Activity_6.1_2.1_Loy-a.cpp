#include<iostream>
#include <cmath>
#include <cstdlib>
#include <cstdlib>
using namespace std;

int main()
{
	int num1, num2, sum, choice, choose;
	bool constant= true;
	cout<<"Hello to you, we are to calculate number for you"<<endl;
	cout<<"\n Input number\n";
	cin>>num1;
	
	cout<<"\n Input 2nd number\n";
	cin>>num2;
	
	cout<<"\nPress 1 to add numbers"<<endl;
	cout<<"Press 2 to subtract"<<endl;
	cout<<"Press 3 to multiply"<<endl;
	cout<<"Press 4 to divide"<<endl;
	cin>> choice;
	
	while(constant)
	{
	
	switch (choice)
	{
	 case 1:
	 	sum=fma(1.0, num1, num2);
	 	cout<<"\nthe sum of 2 added numbers is: "<<sum<<endl;
	 	
		cout<<"\n Input number\n";
	cin>>num1;
	
	cout<<"\n Input 2nd number\n";
	cin>>num2;
	
	cout<<"\nPress 1 to add numbers"<<endl;
	cout<<"Press 2 to subtract"<<endl;
	cout<<"Press 3 to multiply"<<endl;
	cout<<"Press 4 to divide"<<endl;
	cin>> choice;
	 break;	
		
	case 2:
		sum=fma(-1.0, num2, num1);
		cout<<"\nthe sum of 2 subtracted numbers is: "<<sum<<endl;
	 	cout<<"\nInput choose to whether you like to add, subtract, multiply or divide"<<endl;
	 	
	cout<<"\n Input number\n";
	cin>>num1;
	
	cout<<"\n Input 2nd number\n";
	cin>>num2;
	
	cout<<"\nPress 1 to add numbers"<<endl;
	cout<<"Press 2 to subtract"<<endl;
	cout<<"Press 3 to multiply"<<endl;
	cout<<"Press 4 to divide"<<endl;
	cin>> choice;
	 break;	
	 
	 case 3:
	 sum=fma(num1, num2, 0.0);
	 cout<<"\nthe sum of 2 multiplied numbers is: "<<sum<<endl;
	 
	 	cout<<"\nInput choose to whether you like to add, subtract, multiply or divide"<<endl;	
	
	 	
	cout<<"\n Input number\n";
	cin>>num1;
	
	cout<<"\n Input 2nd number\n";
	cin>>num2;
	
	cout<<"\nPress 1 to add numbers"<<endl;
	cout<<"Press 2 to subtract"<<endl;
	cout<<"Press 3 to multiply"<<endl;
	cout<<"Press 4 to divide"<<endl;
	cin>> choice;
	 break;	
	 
	 case 4:
	 div_t sum = div(num1, num2);
    cout << "\nQuotient: " << sum.quot << std::endl;
    cout << "Remainder: " << sum.rem << std::endl;	
    
   	cout<<"\n Input number\n";
	cin>>num1;
	
	cout<<"\n Input 2nd number\n";
	cin>>num2;
	
	cout<<"\nPress 1 to add numbers"<<endl;
	cout<<"Press 2 to subtract"<<endl;
	cout<<"Press 3 to multiply"<<endl;
	cout<<"Press 4 to divide"<<endl;
	cin>> choice; 	
	 break;	
   }
		
		
	}
	return 0;
}
