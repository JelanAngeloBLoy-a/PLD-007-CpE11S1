#include<iostream>
#include<cmath>

using namespace std;

double CubeArea(double s)
{   
	double A;
	
	A= s*s*s;
	
	return A;
}



int main()
{
	int s;
	double A;
	cout<<"Let us find the surface area of your cube\n";
	cout<<"Input cube side:";
	cin>>s;
	
	A= CubeArea(s);
	
	cout<<"The area of your square is:"<<A;
	
	return 0;
}
