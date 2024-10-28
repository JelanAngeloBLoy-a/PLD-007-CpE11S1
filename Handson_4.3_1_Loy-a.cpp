#include <iostream>
using namespace std;
int main()
{
	int SIZE=7;
	string Days_ofTHEWEEK[SIZE]={"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
	int number;
	

	while (1)
	{
	cout<<"Input nuber of the day of the week:";
	cin>>number;
		
		if (number<7){
			
		
		cout<<"The Number of the day is "<<number<<" Then that means the day today is: "<<Days_ofTHEWEEK[number]<<endl;
		
	}
	
	else{
		cout<<"Error, no such day."<<endl;
		break;	
	    }
	
    }  
	return 0;
}
