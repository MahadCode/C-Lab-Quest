//C program to print the Floyd's Triangle
#include<stdio.h>

//main function begins here
int main(){
  //Defining 'row' variable for taking input of number of rows of desired pattern
  int row;
  printf("%s", "Input the number of rows(height):\n");
  scanf("%d", &row);
  
  //Defining the 'i' which will act as controller as first while loop
  int i=0;
  //First while loop whilch is used to print multiple rows i.e (it controll height of pattern)
  while(i<row)
  { 
  //Defining 'j' variable which will act as controller as second while loop
  int j=0;
    //Second while loop which is used to print a single row i.e (it controll width of each row)
  while(j<i+1){
    //if-else statment to check whether row number is odd or even
    if(i%2==0)
    {
     //if-else statment to print flyod triangle's pattern in each row
     //if statment to print "0" in each row starts here
     if(j%2==0)
     {
       printf("%s", "0");
     }//if statment ends here
     //else statment to print "1" in each row starts here
     else
     {
       printf("%s", "1"); 
     }//else statment ends here
    }//if statemnt ends here
    else
    {
     //if-else statment to print flyod triangle's pattern in each row
     //if statment to print "1" in each row starts here
     if(j%2==0)
     {
       printf("%s", "1");
     }//if statment ends here
     //else statment to print "0" in each row starts here
     else
     {
       printf("%s", "0"); 
     }//else statment ends here
    }//else statment ends here 
    j++;     //increamenting 'j' by 1
    }//2nd while loop ends here
    
    //This printf is used to move the cursor to new line at the end of each row
    printf("%s", "\n");

    i++;     //increamenting 'i' by 1
}//1st while loop ends here
return 0;
}//main function ends here
