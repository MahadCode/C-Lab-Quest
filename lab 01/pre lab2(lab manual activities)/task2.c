// #Here program which applies an arithmatic expression to three integers
#include<stdio.h>

int main(){
    // Here defining three variables which take integer as input
    int a, b, c;
    // Here scanf takes the inputs of three variable
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    // This prints the desired result after applying the give algebric expression.
    printf("Result: %d", (a+b*c)/5);
    return 0;
}