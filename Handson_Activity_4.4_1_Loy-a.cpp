#include <stdio.h>
#include <ctype.h>

 int main()
 {
   char lowerTest[]={'p','P','5','!'};
   char ch2;
   int i;
   
   printf ("According to islower:\n");
   for (i=0;i<4;i++)
   {
   	
   	
   	if (islower(lowerTest[i]))
   	 {
   		printf ( "%c is a lowercase letter\n",lowerTest[i]);
	 } 
	 
   	else
     {
   	    printf ("%c is not a lowercase letter\n",lowerTest[i]);
     }
   	 
   	
   }
   
   char upperTest[]={'p','P','5','!'};
   
   printf ("    \n");
   printf ("According to isupper:\n");
   for (i=0;i<4;i++)
   {
   	char ch2=upperTest[i];
   	
   	if (isupper(upperTest[i]))
   	 {
   		printf ( "%c is a uppercase letter\n",upperTest[i]);
	 } 
	 
   	else
    {
   	    printf ("%c is not a uppercase letter\n",upperTest[i]);
    }
   	
   	
   }
   
   char Conversion[]={'u','7','$'};
   char Conversion2[]={'L'};
   
   for (i=0;i<3;i++)
   {
   char	j=toupper(Conversion[i]);
    printf("\n");
   	printf ("%c converted to uppercase is %c",Conversion[i],j);
   }
   
   for (i=0;i<1;i++)
   {
   char	j=tolower(Conversion2[i]);
    printf("\n");
   	printf ("%c converted to lowercase is %c",Conversion2[i],j);
   }
   
   return 0;
 }
