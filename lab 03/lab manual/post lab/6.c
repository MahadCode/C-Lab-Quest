//C program which is calculator
#include<stdio.h>
#include<math.h>

//main function begins here
int main(){
    printf("Select an operation to perform the calculation in C calculator\n1 Addition\n2 Subtraction\n3 Multiplication\n4 Division\n5 Square\n6 Square Root\n7 Exit\n\n");
    //Defining 'i' variable which acts as loop controller
    int i=0;
    //while loop to perform the calculations
    while (i!=7) {
        //taking input of choice
        //Defining the choice variable which will take input the choice of user
        int choice;
        printf("Please, Make a choice ");
        scanf("%d", &choice);
        
        //if else statments to chech which calculations is going to operate
        if (choice==1){
           printf("You Choose: Addition\n");
           float num1;
           printf("Enter first number ");
           scanf("%f", &num1);
           float num2;
           printf("Enter second number ");
           scanf("%f", &num2);
           float addition=num1+num2;
           printf("Addition of two numbers is: %.2f\n\n", addition);
           }
           else if (choice==2){
           printf("%s", "You Choose: Subtraction\n");
           float num1;
           printf("%s", "Enter first number ");
           scanf("%f", &num1);
           float num2;
           printf("%s", "Enter second number ");
           scanf("%f", &num2);
           float subtraction=num1-num2;
           printf("Subtraction of two numbers is: %.2f\n\n", subtraction);
           }
           else if (choice==3){
           printf("You Choose: Multiplication\n");
           float num1;
           printf("Enter first number ");
           scanf("%f", &num1);
           float num2;
           printf("Enter second number ");
           scanf("%f", &num2);
           float multiply=num1*num2;
           printf("Multiplication of two numbers is: %.2f\n\n", multiply);
           }
           else if (choice==4){
           printf("You Choose: Division\n");
           float num1;
           printf("Enter first number ");
           scanf("%f", &num1);
           float num2;
           printf("Enter second number ");
           scanf("%f", &num2);
           float divide=num1/num2;
           printf("Division of two numbers is: %.2f\n\n", divide);
           }
           else if( choice==5 ){
           printf("You choose: Square\n");
           float num;
           printf("Enter a number ");
           scanf("%f", &num);
           float square=(num*num);
           printf("Square of the number is %.2f\n\n", square);
           }
           else if( choice==6 ){
            printf("You choose: Square Root\n");
           float num;
           printf("Enter a number ");
           scanf("%f", &num);
           float sq_root=sqrt(num);
           printf("Square of the number is %.2f\n\n", sq_root);
           }
           else if( choice==7 ){
            printf("You choose: Exit\n\n");
           }
           else{
            printf("Invalid Choice! Please input a valid option\n\n");
           }
           
           //if choice is equal to 7 then making i also 7 so the loop can end
           if (choice==7){
            i=7;
           }

        }//while loop ends here
    return 0;
    }//main function ends here
