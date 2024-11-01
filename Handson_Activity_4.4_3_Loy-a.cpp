#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

 

int main()

{
 char str1[100], str2[100], str3[100], str4[100];
 int int1,int2,int3,int4, sum;
 
 printf ("Input string: ");
scanf("%s",str1);
 
 printf ("Input string: ");
scanf("%s",str2);
 
 printf ("Input string: ");
scanf("%s",str3);
 
 printf ("Input string: ");
scanf("%s",str4);
 
 //conversion of string to integers
int1=atoi(str1);
int2=atoi(str2);
int3=atoi(str3);
int4=atoi(str4);

printf ("The string has been converted to:%d\n",int1);
printf ("The string has been converted to:%d\n",int2);
printf ("The string has been converted to:%d\n",int3);
printf ("The string has been converted to:%d\n",int4);
printf("    \n",sum);

//sum
 sum=(int1+int2+int3+int4);

printf("The sum of the converted strings is: %d",sum);

 

    return 0;

}
