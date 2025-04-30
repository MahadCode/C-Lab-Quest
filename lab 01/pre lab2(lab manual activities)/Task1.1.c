// This program finds the largest of three numbers
#include<stdio.h>

// Main function begins
int main(){
   // Defining 'num1' variable which take first integer as input
   int num1;
   printf("Enter your first number\n");
   scanf("%d", &num1);
   // Defining 'num2' variable which take second integer as input
   int num2;
   printf("Enter your second number\n");
   scanf("%d", &num2);
   // Defining 'num3' variable which take third integer as input
   int num3;
   printf("Enter your third number\n");
   scanf("%d", &num3);

   //Here using ifelse statements to find the largest number
   if (num1>=num2 && num1>=num3)
   { printf("Largest Number is %d", num1); }
   else if (num2>=num1 && num2>=num3)
   { printf("Largest Number is %d", num2); }
   else 
   { printf("Largest Number is %d", num3); }
   return 0;
}