#include <iostream> 
using namespace std;

int main ()
{
  //Exercise 5: create a c++ program that applies MDAS calculator//
  
    float x;
    char  operation;
    float y;
    float result;
    
    cout<<"Enter number 1:";
    cin>> x;
    
     cout<<"Enter operator";
    cin>> operation;
    
    cout<<"Enter number 2:";
    cin>> y;
    
    
    
    switch(operation)
  {
  
       case '+': result=(x+y);
  	  cout<<"The sum:"<<result;
    break;
  	 
        case'-': result=(x-y);
	cout<<"The difference:"<<result;
    break;
  	 
	   case'*': result=(x*y);
  	  cout<<"The product:"<<result;
    break;
  	
	  case'/': result=(x/y);
  	  cout<<"The quoitent"<<result;
    break;
   } 
	return 0;
}
