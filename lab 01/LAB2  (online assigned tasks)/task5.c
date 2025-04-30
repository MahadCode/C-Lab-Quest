//C program that prompts the user to input an integer of Fixed 5 digits. Outputs the number with the digits reversed
#include<stdio.h>

//main function begins here
int main(){
    //defining the input_number variable to store a five digit number
    int input_number;
    printf("Enter a five digit number: \n");
    scanf("%d", &input_number);
    int number;
    number = input_number;
    if (input_number<0){
      number=-(number);
    }

    // count variable will be used to chech the 5 digit number
    int count = 0;

    //All variables and logic below that is used to check whether the number is 5 digit or not
    int num, rem1, rem2, rem3, rem4, rem5;
    num = number; 
    rem1 = num/10;
    if (rem1!=0)
      { count=count+1; }
    rem2 = rem1/10;
    if (rem2!=0)
      { count=count+1; }
    rem3 = rem2/10;
    if (rem3!=0)
      { count=count+1; }
    rem4 = rem3/10;
    if (rem4!=0)
      { count=count+1; }    
    rem5 = rem4/10;
    if (rem5==0)
      { count=count+1; }

    // if else statement to check the whether given number is 5 digit or not 
    if (count==5){
        //This logic is used to reverse the number
        int num1, num2, num3, num4, final_num,final_num1, final_num2, final_num3, final_num4, final_num5;
        num1 = (num%10)*10; 
        num2 = (rem1%10);
        final_num = num1+num2;
        final_num1 = final_num*10;                               
        num3 = (rem2%10);
        final_num2 = (final_num1+num3)*10;  
        num4 = (rem3%10);
        final_num3 = (final_num2+num4)*10;  
        final_num4 = (final_num3+rem4);
        final_num5 = -final_num4;
        if (input_number<0){
            printf("Reverse is %d\n", final_num5);
        } else
        {printf("Reverse is %d\n", final_num4);}
    }
    else   { printf("lenght of number is not 5"); }
    return 0;  
}
