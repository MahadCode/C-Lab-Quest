//C program to print Star pattern
#include<stdio.h>

//main function begins here
int main(){
  //Defining 'row' variable for taking input of number of rows of desired pattern
  int row;
  printf("%s", "Enter the number of rows(height):\n");
  scanf("%d", &row);
  
  //Defining the 'i' which will act as controller as first while loop
  int i=0;
  //First while loop whilch is used to print multiple rows i.e (it controll height of pattern)
  while(i<row)
  {
    //Defining 'j' variable which will act as controller as second while loop
    int j=0;
    //Second while loop which is used to print a single row i.e (it controll width of each row)
    while(j<row+i){
     //if statment to print sign in each row
     if (i+j>=row-1){
      printf("%s", "*");      //displaying the signs in pattern
     }// if statement ends here
     //else statment to print space in each row
     else{
      printf("%s", " ");
     }//else statment ends here
     j += 1;           //increasing the vaule of j by 1
     //if statment to break line at the end of each row
     if (j==row+i){
      printf("%s", "\n");    //displaying the space in pattern
     }//if statment ends here
    }//second while loop ends here
    i+=1;   //increasing the vaule of i by 1
  }//first while loop ends here
  return 0;
}//main function ends here