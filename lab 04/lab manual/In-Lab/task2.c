/*C program which:
Reads a number as an input from user
Pass that number to a function
Write a function logic to create square asterisks pattern
Display Asterisks on the Console [Hint: Use void as function return-type]*/
#include<stdio.h>


int main(){
    int row;
    printf("Enter the number of rows of square\n");
    scanf("%d", &row);
    for (int i=0; i<row; i++)
    {
    for ( int j=0; j<row; j++)
    {
        printf("%-2s", "*");        
    }
    puts(""); 
    }
    return 0;
}

    



