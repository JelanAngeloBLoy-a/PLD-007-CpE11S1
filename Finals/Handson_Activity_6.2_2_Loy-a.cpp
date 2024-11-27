#include<iostream>
#include<cmath>

using namespace std;

double HypotenuseLenght(int a, int b, double c)
{   
    double a2, b2;
    
	a2=pow(a,2);
	b2=pow(b,2);	
	
	c=sqrt(a2+b2);
	
	return c;
}



int main()
{
	int a, b;
	double c;
	cout<<"\nLet us find the length of the hypotenuse\n";
	cout<<"Input value for a:";
	cin>>a;
	cout<<"Input value for b:";
	cin>>b;
	
	c=HypotenuseLenght(a, b, c);
	
	cout<<"\nthe hypotenuse lenght is:"<<c;
	
	return 0;
}
