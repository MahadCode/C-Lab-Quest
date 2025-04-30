//C program for calculating electricity bills in PKR. Prompt the user to input their monthly consumed units
#include<stdio.h>

//Main function begins here
int main()
{
 //Defining the units variable   
 int unit;
 printf("Enter your monthly consumption in units: \n");
 scanf("%d", &unit);

 //Defining the price variable
 int price=0;
 
 //Using if else to check the input is valid or not
if(unit>=0)
{
 //Using if else statement to check how many units are consumed
 if (unit<=100)
 {
   price=(unit*10);
 }
 else if (unit>100 && unit<=300)
 {
   price=(unit*15);
 }
 else if (unit>300 && unit<=1000)
 {
   price=(unit*20);
 }
 else
 {
   price=(unit*50);
 }

 //Defining the charge vairable for base monthly charge
 int charge=500;

 //Defining bill variable for final price
 int bill;
 bill=(price+charge);

 //this printf is used to display the final results
 printf("Total bill amount in Pakistani Rupees\n %d PKR", bill);
}
else
{ printf("Your input is not valid.Enter a valid input"); }
 
 return 0;
}//Main function ends here