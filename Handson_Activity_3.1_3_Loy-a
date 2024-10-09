#include <stdio.h>
int main()
/*Create a program that will calculate the cost of sending a small parcel.
The post office charges P5.00 for the first 300g, and P2.00 for every 100g thereafter (rounded up), up to a maximum weight of 1000g.*/
{
float cost=0, total, total2;
int gram, limit=1000;

printf("What is the price of the parcel:");
scanf("%f", &cost);

 for (gram=0; gram<=limit; gram+=100)
 {
  if  ((gram>=300) && (gram<399))
  {
 
  total=(cost+5);
  printf("Parsel reached 300g limit, the price has now increased to:%2f\n",total);
  }  
   else if (gram>=400)
   {

  	total+=2;
  	printf("Additional 100g, the price of the parcel has now increased to:%2f\n",total);
    
   }
  
 }	
return 0;
}
