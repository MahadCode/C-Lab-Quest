//C program which prints the patren
#include<stdio.h>

int main(){
    int row;
    printf("Enter the number of rows");
    scanf("%d", &row);

    //Defining the "i"  which will act as the loop controller for the first while loop
    int i=1;
    //1st while loop starts here
    while(i<=row)
    {
      //Defining the "j"  which will act as the loop controller for the second while loop  
      int j=1;
      int sum=1;
      while(j<=row)
      {
        printf("%d\t", sum);
        sum=sum+i;
        j++;
      }
      i++;
      printf("\n");
    }
    return 0;
}