#include<iostream>
#include<cstdlib>
using namespace std;

int main()
{
	
int* ptr=(int*)malloc(sizeof(int)); //Dynamically allocate memeory
if(ptr!=NULL){
	*ptr=10;
	cout<<"Value: "<<ptr<<endl;
	free(ptr); //Free alocated memory
}
	
return 0;
	
	
}
