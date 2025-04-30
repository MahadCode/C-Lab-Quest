#include<stdio.h>

int main(){
int i=1;
int check=0;    
do{
float ac_no;
printf("Enter the account number:\n");
scanf("%f", &ac_no);
if(ac_no==check){
    printf("Not unique\n");
}
else{
float credit_limit;
printf("Enter your credit limit:\n");
scanf("%f", &credit_limit);
float new_limit=credit_limit/2;

float bal;
printf("Enter the current balance:\n");
scanf("%f", &bal);
printf("Customer%d\n", i);
printf("Old Credit limt: $%.2f\n", credit_limit);
printf("New Credit limt: $%.2f\n", new_limit);
if(bal>new_limit){
    printf("Warning: Current balance exceeds new credit limit\n");
}
else{
    printf("You don't exceed the new credit limit\n");
}
i++;
}
check=ac_no;
}while(i<=3);
}