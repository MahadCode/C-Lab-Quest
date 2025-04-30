//The following program takes a “obtained marks” as an input from the user and displays grade corresponding to marks using following table
#include<stdio.h>

//Main function begins here
int main(){
    //Definig the 'number' variable which will take obtained marks as input from user
    int number;
    printf("Enter your obtained marks: \n");
    scanf("%d", &number);
    
    //Using if elseif statements to print the grades according to your obtained marks
    if(number>=85)
      { printf("A"); }
    else if(number>=80)
      { printf("A-"); }
    else if(number>=75)
      { printf("B+"); }
    else if(number>=70)
      { printf("B"); }
    else if(number>=65)
      { printf("B-"); }
    else if(number>59)
      { printf("C"); }
    else if(number>54)
      { printf("D"); }
    else
      { printf("F"); }
    //if else statements ends here

    return 0;                    
}