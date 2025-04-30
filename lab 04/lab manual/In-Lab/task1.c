/*C program which reads three numbers as an input from user,find the second largest number using “Logical Operators”
and displays “Second Largest Number” on the Console*/
#include<stdio.h>

int main(){
    int num1, num2, num3;
    printf("Enter three numbers\n");
    scanf("%d", &num1);
    scanf("%d", &num2);
    scanf("%d", &num3);
    int larg;

    if(num1>=num2 && num1>=num3)
    {
        if(num1==num2){
            printf("Second Largest number is  %d", num3);
        }
        else if(num1==num3){
            printf("Second Largest number is  %d", num2);
        }
        else if (num2>=num3)
        {
            printf("Second Largest number is  %d", num2);
        }
        else{
            printf("Second Largest number is  %d", num3);
        }
    }
    else if(num2>=num1 && num2>=num3)
    {
        if(num2==num3){
            printf("%d", num1);
        }
        if (num1>=num3)
        {
            printf("Second Largest number is  %d", num1);
        }
        else{
            printf("Second Largest number is  %d", num3);
        }
    }
    else{
        if (num1>=num2)
        {
            printf("Second Largest number is  %d", num1);
        }
        else{
            printf("Second Largest number is  %d", num2);
        }
    }
    return 0;
}