// C program that , Prompts the user to input an integer, Outputs the number with the digits reversed.
#include<stdio.h>

//main function begins here
int main(){
    //Defining 'num' variable to take input of number
    int num;
    printf("%s", "Enter the number:\n");
    scanf("%d", &num);
    //Defining 'reverse' variabel which wil store the reverse of given number
    int reverse=0;

    //While to find reverse starts here
    while(num!=0)
    {
      //Defining "rem" which will store last digit in each cycle
      int rem;  
      rem=num%10;
      reverse=(reverse+rem)*10;
      //Removing the last digit from 'num' in each cycle
      num=num/10;   
    }//while ends here

    //removing extras last zero from reverse number
    reverse=reverse/10;

    //Displaying the reverse of given number given number
    printf("Number with its digits reversed:\n%d", reverse);

    return 0;
}//main function ends here