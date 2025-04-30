//C program to print a tirangle of star
# include<stdio.h>

int main(){
    //row variable take input of the no. of rows of triangle
    int row;
    printf("Enter the number of rows(height): \n");
    scanf("%d", &row);
    int i, j;
    //1st loop for printing multiple rows starts here
    for (int i=row-1; i>=0; i--)
    {
     //2nd loop for printing a single row starts here
     for (int j=0; j<row; j++)
     {
        int k=i-j;
        //if else statments to print "*" and space
        if (k >= 0)
        { printf("*"); }
        else
        { printf(" "); }
     }//2nd loop starts here
     //printf to break the line at the end of each row
     printf("\n");
    }//1st loop ends here
    return 0;
}//main function ends here