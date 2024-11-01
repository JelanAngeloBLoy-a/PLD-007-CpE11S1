#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()

{
char character, characterupper, characterlower;
	
 
   printf ("Input a character from your keyboard:");
   scanf ("%c",&character);
   
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
   
   
    if (isblank(character))
   {
   	printf ("%c is a blank character \n",character);
   }
   
   else
   {
   	printf ("%c is not a blank character\n",character);
   }
   
   
   if (isdigit(character))
   {
   	printf ("%c the character is a digit\n",character);
   }
   
   else
   {
   	printf ("%c the character is not a digit\n",character);
   }
   
   
   if (isalpha(character))
   {
   	printf ("%c the character is an alphabetic letter\n",character);
   }
   
   else
   {
   	printf ("%c the character is not an alphabetic letter\n",character);
   }
   
   
   if (isalnum(character))
   {
   	printf ("%c is an alphanumeric character\n",character);
   }
   
   else
   {
   	printf ("%c it is not an alphanumeric character\n",character);
   }
   
   
   if (isxdigit(character))
   {
   	printf ("%c is a hexadecimal digit \n",character);
   }
   
   else
   {
   	printf ("%c is not a hexadecimal digit \n",character);
   }
   

    if (isspace(character))
   {
   	printf ("%c is a whitespace character \n",character);
   }
   
   else
   {
   	printf ("%c is not a whitespace character \n",character);
   }
   
   
   if (isgraph(character))
   {
   	printf ("%c is a graphical character \n",character);
   }
   
   else
   {
   	printf ("%c is not a graphical character\n",character);
   }
   
   
    if (iscntrl(character))
   {
   	printf ("%c is a control character \n",character);
   }
   
   else
   {
   	printf ("%c is not control character \n",character);
   }
   

    if (isprint(character))
   {
   	printf ("%c is a printable character\n",character);
   }
   
   else
   {
   	printf ("%c is not a printable character \n",character);
   }

  
  if (ispunct(character))
   {
   	printf ("%c is a printing character other than a digit, a space, a letter or not\n",character);
   }
   
   else
   {
   	printf ("%c is not a printing character other than a digit, a space, a letter or not\n",character);
   }
   
   
   //converting
   characterupper= toupper(character);
   characterlower= tolower(character);
   printf ("%c now converted to upper:%c\n ",character,characterupper);

   printf ("%c now converted to lower:%c\n ",character,characterlower);

    return 0;

}
