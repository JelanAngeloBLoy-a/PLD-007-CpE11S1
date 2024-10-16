#include <iostream>
using namespace std;
int main ()

{
 int total=0, counter=0;
 
 int grade;
cout<<"Input grade to continue or -1 to quit:";
cin>>grade;


cout<<"The average is:"<<grade<<endl;	

while ((grade!=-1))
{
int totalgrade;
totalgrade=(total+grade);
counter++;

cout<<"Input grade:";
cin>>grade;


if ((counter!=0))
{
float average;
average=(totalgrade/counter);
cout<<"The average is:"<<average<<endl;	
}

else
{
	cout<<"No grades were entered";
}
}

	return 0;
}
