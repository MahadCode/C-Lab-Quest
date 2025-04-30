//C program which takes the input of the coefficients of Quadratic Equation and unknown variable. Solve the quadratic equation and display the Result on the console. Let the coefficients can be any Real number and the unknown variable can be any integer.
#include<stdio.h>

//Main function begins here
int main(){
    //Defining the variables of co-efficients
    float a, b, c;
    printf("Enter a, b, c: \n");
    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);
    //Defining the variable of x
    int x;
    printf("Enter x: ");
    scanf("%d", &x);
    //Getting the answer
    printf("Answer: %f", (a*x*x)+(b*x)+c);
    return 0;
}// Main function ends here 