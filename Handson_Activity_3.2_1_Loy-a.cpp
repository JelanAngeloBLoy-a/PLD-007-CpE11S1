#include <stdio.h>
/*Create a program that uses for structure to sum all the even integers from 2  to 100. Sum is 2550.*/

int main ()
{
	int i=0, sum=0;
	
	for (i=2; i<=100; i+=2){
	printf("Number:%d\n",i);
	sum+=i;
 }
	printf("Sum:%d\n",sum);
	return 0;
}
