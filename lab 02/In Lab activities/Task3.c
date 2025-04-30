//C program which reads a 3-digit number from user. Add each digit and display the sum on the Console
#include<stdio.h>

//Main function begins here
int main()
{
  //Defining the "num" variable to take input  
  int num;
  printf("Enter a 3-digit number: \n");
  scanf("%d", &num);
  //if number is 3 digit then we proceed on
  if (num<1000 && num>99)
   { 
     //Defining the 'sum1' variable to get the 3rd digit in number
     int sum1;
     sum1 = num%10;
     
     // num1 store the value of num after removing its last digit
     int num1=num/10;
     // Defining the sum2 variable to get the 2nd digit in number
     int sum2;
     sum2=num1%10;

     //rem3 variable gets the 1st digit in number
     int rem3;
     rem3=num1/10;

     //Defining the sum variable which store the sum
     int sum;
     sum=(sum1+sum2+rem3);

     //printing the sum on display
     printf("The sum of each digits of given number: \n%d", sum);
   }
   else
   {  printf("Your number is not 3 digit. Please enter a 3-digit number.");  }
}

