#include <iostream>
using namespace std;
int main ()
{
char Subject;
float grade, physics, biology, math, computer, chemistry, average;

bool consistent=true;

switch (consistent)
{
case true:
cout<< "Physics:";
cin>>physics;


cout<< "Biology:";
cin>>biology;

cout<<"Math:";
cin>>math;

cout<< "Computer:";
cin>>computer;

cout<< "Chemistry:";     
cin>>chemistry;

average=((physics+biology+math+computer+chemistry)/5);
break;

default:
		{
			cout<<"Does not Exist";
			break;
		}
}
cout<<"----------------------"<<endl;

cout<<"Average is:"<<average<<endl;

if ((average>=90)&&(average<=100))
{
	cout<<"Grade level:A";
}

else if ((average>=80)&&(average<=89))
{
	cout<<"Grade level:B";
}

else if ((average>=70)&&(average<=79))
{
	cout<<"Grade level:C";
}

else if ((average>=60)&&(average<=69))
{
	cout<<"Grade level:D";
}

else if ((average>=40)&&(average<=59))
{
	cout<<"Grade level:E";
}

else 
{
	cout<<"Grade level:F";
}

return 0;
}
