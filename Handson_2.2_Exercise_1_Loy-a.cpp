#include <iostream>
using namespace std;
int main ()
{
//	Set total to zero. Set grade counter to one//
	int total=0;
	int GradeCounter=1;
	
// While grade counter is less than or equal to ten//	
	while ((GradeCounter<=10))
	{
//	Input the next grade //
    int grade;
	
		cout<<"Input Grade:";
		cin>>grade;
		
// Add the grade into the total//				
	int	gradetotal;
	 gradetotal=(grade+total);
	 
	 
	 // Add one to the grade counter//
	  GradeCounter++;
	  
	// Set the class average to the total divided by ten//
	int ClassAverage;
	ClassAverage=(gradetotal/10);
	
	
	//Print the class Average//
	cout<<"The class average is:"<<ClassAverage<<endl;
	
		
		}	
	return 0;
}