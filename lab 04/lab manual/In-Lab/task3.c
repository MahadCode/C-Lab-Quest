/*C program:
Take integer as an input from the user
Display square of the integer in the function using Math Library Function*/
#include<stdio.h>
#include<math.h>

int main(){
    int num;
    printf("Enter the number:");
    scanf("%d", &num);
    int square;
    square = pow(num,2);
    printf("Square is: %d", square);
    return 0;
}