/*C program that:
Takes input of two integers.
Finds the sum of all numbers which are dividends of 4 and 16, between these two integers. 
Print an appropriate message if no such dividend (number) exists in the range. 
Display the Sum of all divisible on the Console as shown in figure.*/
#include<stdio.h>

//main function begins here
int main(){
  //Defining 'num1' variable for taking input of first integer
  int num1;
  printf("%s", "Enter the first integer(Start):\n");
  scanf("%d", &num1);
  //Defining 'num2' variable for taking input of second integer
  int num2;
  printf("%s", "Enter the second integer(End) :\n");
  scanf("%d", &num2);
  
  //Defining and initializing 'i' variable which will act as loop controller.
  int i=(num1+1);

  //Defining 'sum' variable which will store the sum of dividends
  int sum=0;
  
  //while loop to find sum of dividends
  while(i<num2){
    if(i%4==0 && i%16==0){
     sum=sum+i;
    }
    i+=1;
  }

  //if else statement to whether there is any dividend between given inputed integers
  if(sum!=0){
    printf("Sum of all dividends: %d", sum);  //Printing the sum on display
  }
  else{
    printf("%s", "There are no dividends of 4 and 16 between integers you have entered");
  }    
  return 0;     
}//main function ends here