#include <iostream>

using namespace std;

int main ()

{
	//initialization of variables;
	
   float grade;
   
   cout<<"Input percentage grade:";
   
   //input the values of the given variables;
   cout<<"Input the percentage grade of x:";
   cin>> grade;
 
 
   
   
   //process, descriptive rating;
   
   if((grade>=94) && (grade<=100))
   {
   	 cout<<"Excellent"<<endl;
   	 
   }
   
   else if (grade>100)
   {
   	cout<<"Does not exist"<<endl;
   }
   
   else if ((grade>=88.5) && (grade<=93.99))
   {
   	cout<<"Superior"<<endl;
   }
   
    else if ((grade>=83) && (grade<=88.49))
   {
   	cout<<"Meritorous"<<endl;
   }
   
    else if ((grade>=77.5) && (grade<=82.99))
   {
   	cout<<"Very Good"<<endl;
   }
   
   else if ((grade>=72) && (grade<=77.49))
   {
   	cout<<"Good"<<endl;
   }
   
   else if ((grade>=65.5) && (grade<=71.99))
   {
   	cout<<"Very Satisfactory"<<endl;
   }
   
    else if ((grade>=616) && (grade<=5.49))
   {
   	cout<<"Satisfactory"<<endl;
   }
   
    else if ((grade>=55.5) && (grade<=60.99))
   {
   	cout<<"Fair"<<endl;
   }
   
   else if ((grade<=50) && (grade>=55.49))
   {
   	cout<<"Passing"<<endl;
   }
   
   else 
   {
   	cout<<"Failed"<<endl;
   }
   
   return 0;
   
}
