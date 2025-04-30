//C program which gake input from the User.Output Stars Patterns as shown at the following output screen as shown IFF(If and only If) the input is 10, otherwise display the message that “The input password for rows was not correct to the print the Stars”.

#include<stdio.h>

int main(){
   //Defining row variable which will take input the no. of row
   int row;
   printf("Enter the number of row: ");
   scanf("%d", &row);

   //if else statement is used to the check whether the user input the desired number of rows
   if (row==10)
   {
    printf("**********\n*********\n********\n*******\n******\n*****\n****\n***\n**\n*\n");
   }
   else
   { printf("The input password for rows was not correct to the print the Stars"); }
   return 0;    
}