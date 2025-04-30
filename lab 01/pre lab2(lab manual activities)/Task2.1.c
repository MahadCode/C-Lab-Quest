// Calculator app
#include<stdio.h>

//Main function begins here
int main(){
   // Defining option variable to find which operation user wants to perform
   int option;
   // It display the list of operations
   printf("Press 1 to Add numbers. \nPress 2 to Subtract numbers. \nPress 3 to Multiply numbers. \nPress 4 to Divide numbers. \nPress 5 to Square a number. \nSelect Option: \n");
   scanf("%d", &option); //take input form user

   // Nested if else statements which define which operation will be happened according to input
   if (option>0&&option<5)
   {
    // Defining 'num1' variable which take first number as input
    int num1;
    printf("Enter your first number\n");
    scanf("%d", &num1);
    // Defining 'num2' variable which take second number as input
    int num2;
    printf("Enter your second number\n");
    scanf("%d", &num2);
    
    if (option==1)
    printf("Sum of given numbers is: %d", num1+num2);    //Displays the sum of given numbers
    else if (option==2)
    printf("Difference of given numbers is: %d", num1-num2);    //Displays the Difference of given numbers
    else if (option==3)
    printf("Product of given numbers is: %d", num1*num2);    //Displays the Product of given numbers
    else
    printf("Quotient of given numbers is: %d", num1/num2);    //Displays the quotient of given numbers
   }

   else if (option==5)
   {
    //Defining the num variable to input the number
    int number;
    printf("Enter the number: ");
    scanf("%d", &number);
    //Display the square the of given number
    printf("Square of give number is %d", number*number);
   }

   //If user select any other option it will gives the incorrect number error
   else
   { printf("Incorrect Number"); }

   return 0;
}     
//Main function ends here   