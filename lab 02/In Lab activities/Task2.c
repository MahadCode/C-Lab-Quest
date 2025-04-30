//C program that simulates a grading system for a course. Ask the user to input their scoreas Marks(0 to 100). 
#include<stdio.h>

//Main function begins here
int main()
{
  //Defining the num variable to takes numbers as input
  int num;
  printf("Enter your obtained percentage score(0 to 100): \n");
  scanf("%d", &num);

  //Using if else statement to check the user has enter the valid input
  if (num>=0 && num<=100)
  {
   //Using nested if else statment to determine the GPA and grade
   if (num>=85)
   {
    printf("Your Letter Grade:\n A\n Your Grade Points(GPA):\n 4.00\n Your score is not scaled");
   }
   else if (num==84)
   {
    printf("Your Letter Grade:\n A\n Your Grade Points(GPA):\n 4.00\n Your score is scaled");
   }
   else if (num>=80 && num<84)
   {
    printf("Your Letter Grade:\n A-\n Your Grade Points(GPA):\n 3.70\n Your score is not scaled");
   }
   else if (num==79)
   {
    printf("Your Letter Grade:\n A-\n Your Grade Points(GPA):\n 3.70\n Your score is scaled");
   }
   else if (num>=75 && num<79)
   {
    printf("Your Letter Grade:\n B+\n Your Grade Points(GPA):\n 3.30\n Your score is not scaled");
   }
   else if (num==74)
   {
    printf("Your Letter Grade:\n B+\n Your Grade Points(GPA):\n 3.30\n Your score is scaled");
   }
   else if (num>=70 && num<74)
   {
    printf("Your Letter Grade:\n B\n Your Grade Points(GPA):\n 3.00\n Your score is not scaled");
   }
   else if (num==69)
   {
    printf("Your Letter Grade:\n B\n Your Grade Points(GPA):\n 3.00\n Your score is scaled");
   }
   else if (num>=65 && num<69)
   {
    printf("Your Letter Grade:\n B-\n Your Grade Points(GPA):\n 2.70\n Your score is not scaled");
   }
   else if (num==64)
   {
    printf("Your Letter Grade:\n B-\n Your Grade Points(GPA):\n 2.70\n Your score is scaled");
   }
   else if (num>=61 && num<64)
   {
    printf("Your Letter Grade:\n C+\n Your Grade Points(GPA):\n 2.30\n Your score is not scaled");
   }
   else if (num==60)
   {
    printf("Your Letter Grade:\n C+\n Your Grade Points(GPA):\n 2.30\n Your score is scaled");
   }
   else if (num>=58 && num<60)
   {
    printf("Your Letter Grade:\n C\n Your Grade Points(GPA):\n 2.00\n Your score is not scaled");
   }
   else if (num==57)
   {
    printf("Your Letter Grade:\n C\n Your Grade Points(GPA):\n 2.00\n Your score is scaled");
   }
   else if (num>=55 && num<57)
   {
    printf("Your Letter Grade:\n C-\n Your Grade Points(GPA):\n 1.70\n Your score is not scaled");
   }
   else if (num==54)
   {
    printf("Your Letter Grade:\n C-\n Your Grade Points(GPA):\n 1.70\n Your score is scaled");
   }
   else if (num>=50 && num<54)
   {
    printf("Your Letter Grade:\n D\n Your Grade Points(GPA):\n 1.00\n Your score is not scaled");
   }
   else if (num==49)
   {
    printf("Your Letter Grade:\n D\n Your Grade Points(GPA):\n 1.00\n Your score is scaled");
   }
   else
   {
    printf("Your Letter Grade:\n F\n Your Grade Points(GPA):\n 0.00\n Your score is not scaled");
   }
   //Nested if else ends here   
  }
  else
  {  printf("Your score is not valid i.e it is not between 0 to 100. Enter Valid Score."); }  
  return 0;  
}//Main function ends here