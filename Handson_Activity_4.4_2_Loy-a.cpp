#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()

{
char character;
	
 
   printf ("Input a character from your keyboard:");
   scanf ("%c",&character);
   
   if (isalnum(character))
   {
   	printf ("%c is an alphanumeric character\n",character);
   }
   
   else
   {
   	printf ("%c it is not an alphanumeric character\n",character);
   }
   
   if (isalpha(character))
   {
   	printf ("%c the character is an alphabetic letter\n",character);
   }
   
   else
   {
   	printf ("%c the character is not an alphabetic letter\n",character);
   }
   
   
   if (isdigit(character))
   {
   	printf ("%c the character is a digit\n",character);
   }
   
   else
   {
   	printf ("%c the character is not a digit\n",character);
   }
  
  
    if (islower(character))
   {
   	printf ("%c the character is a lowercase letter\n",character);
   }
   
   else
   {
   	printf ("%c the character is not a lowercase letter\n",character);
   }
   
   
    if (isupper(character))
   {
   	printf ("%c the character is an uppercase letter\n",character);
   }
   
   else
   {
   	printf ("%c the character is not an uppercase letter\n",character);
   }
   
   
    if (isspace(character))
   {
   	printf ("%c is a whitespace character ",character);
   }
   
   else
   {
   	printf ("%c is not a whitespace character \n",character);
   }
   
   
    if (isprint(character))
   {
   	printf ("%c is a printable character ",character);
   }
   
   else
   {
   	printf ("%c is not a printable character \n",character);
   }
   
   
   if (isgraph(character))
   {
   	printf ("%c is a graphical character",character);
   }
   
   else
   {
   	printf ("%c is not a graphical character\n",character);
   }
   
   
   if (iscntrl(character))
   {
   	printf ("%c is a control character ",character);
   }
   
   else
   {
   	printf ("%c is not control character \n",character);
   }
   
   
   if (isxdigit(character))
   {
   	printf ("%c is a hexadecimal digit",character);
   }
   
   else
   {
   	printf ("%c is not a hexadecimal digit \n",character);
   }
  
  
  if (isblank(character))
   {
   	printf ("%c is a blank character",character);
   }
   
   else
   {
   	printf ("%c is not a blank character\n",character);
   }
   
   
   if (isblank(character))
   {
   	printf ("%c is a blank character",character);
   }
   
   else
   {
   	printf ("%c is not a blank character\n",character);
   }
  
   

 
    return 0;

}
