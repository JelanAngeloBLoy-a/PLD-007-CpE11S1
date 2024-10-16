#include <iostream>
using namespace std;
int main()
{
	/*create a program that will produce an output of sum of 10 numbers less than 5 using for loop*/
	int sum, j=100, input1,input2,input3,input4,input5,input6,input7,input8,input9,input10;
	
	
    cout<<"Input a number less than 5"<<endl;
	cin>>input1;

	cin>>input2;
	
	cin>>input3;
	
	cin>>input4;
	
	cin>>input5;
	
	cin>>input6;
	
	cin>>input7;
	
	cin>>input8;
	
	cin>>input9;
	
	cin>>input10;
	
	sum=(input1+input2+input3+input4+input5+input6+input7+input8+input9+input10);
	cout<<"Display the sum:"<<sum<<endl;
	
	for (sum; sum<=j; sum++)
	{
	
	cout<<"Hello:"<<(sum)<<endl;
    }
	
	
	return 0;
}
