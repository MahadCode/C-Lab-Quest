//Task 01: Factorial Calculator of number 5
#include<stdio.h>

int main(){
    //Defining the num variable which take input of number
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
    //Defining factorial variable
    int factorial = num*(num-1)*(num-2)*(num-3)*(num-4);
    // using if else statements to check whether given is 5 or not.
    if (num==5){
        printf("Factorial:  %d", factorial);
    } else
    {printf("The given is not five. Please enter the 5");}

    return 0;
}