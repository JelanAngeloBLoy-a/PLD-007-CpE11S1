#include <iostream>
using namespace std;
int main ()
{
 int item=0;
 int age;
 float DiscountPrice1;
 float DiscountPrice2;
 
 cout<<"How much is the item?:";
 cin>>item;
 cout<<"Insert your age:";
 cin>>age;


if ((age>=4)&&(age<=24))
{
 cout<<"Student Discount Applied (10%)"<<endl;
 DiscountPrice1=(item*0.10);
 DiscountPrice2=(item-DiscountPrice1);
 
 cout<<"Your total is now:"<<DiscountPrice2;
 } 
 
 else if (age>59)
 {
 	cout<<"Senior Citizen Discount Applied (8%)";
 	 DiscountPrice1=(item*0.08);
     DiscountPrice2=(item-DiscountPrice1);
 	 cout<<"Your total is now:"<<DiscountPrice2;
  } 
  
  else
 {
 	cout<<"No, discount sorry";
 }
 	return 0;
}