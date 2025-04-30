//Create a C program which takes input of a number and calculate sum of its digits using for loop.
#include<stdio.h>

//main function begins here
int main(){
    //Defining 'num' variable to take input of number
    int num;
    printf("%s", "Enter the number:\n");
    scanf("%d", &num);
    
    //Defining the "sum" variable which will store the sum of digits of given number
    int sum=0;
    
    //while loop to find sum of digits
    while(num!=0)
    {
      //Defining 'rem' variable to store last digit in each cycle  
      int rem;
      rem=num%10;
      sum=sum+rem;
      num=num/10;  //removing last digit form the number in each cycle
    }//while loop ends here

    printf("Sum of digits of given number: %d", sum);
    return 0;
}//main function ends here
