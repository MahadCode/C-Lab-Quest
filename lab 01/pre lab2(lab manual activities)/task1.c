// This program displays the sum of two integers taken as input from user
#include<stdio.h>

int main(){
    // Here defining two variables which takes two integers as input
    int integer1, integer2;
    printf("Enter two integers: ");
    scanf("%d", &integer1);
    scanf("%d", &integer2);
    // Here defining 'sum' variable which stores the sum
    int sum=integer1+integer2;
    printf("Sum = %d", sum);
    return 0;    
}