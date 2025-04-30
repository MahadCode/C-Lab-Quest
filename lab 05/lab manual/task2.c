/*C program which:
Reads a number as an input from user
Pass that number to a function
Write a function logic to create square asterisks pattern
Display Asterisks on the Console [Hint: Use void as function return-type]*/
#include<stdio.h>
void pattern(int);


int main(){
    int row;
    printf("Enter the number of rows of square\n");
    scanf("%d", &row);
    pattern(row);
    return 0;
}

void pattern(int r){
    for (int i=0; i<r; i++)
    {
    for ( int j=0; j<r; j++)
    {
        printf("%-2s", "*");        
    }
    puts(""); 
    }        
}

    


