//C program to find Greatest common divisor of two integers
#include<stdio.h>
int gcd(int, int);

int main(){
    //Taking input of integer num1 and num2
    int num1;
    printf("Enter first integer:\n");
    scanf("%d", &num1);
    int num2;
    printf("Enter second integer:\n");
    scanf("%d", &num2);
    //printing the GCD
    printf("Greatest common divisor (GCD):\n%d\n", gcd(num1, num2));
}

//function gcd will return the value of GCD of input two integers
int gcd(int n1, int n2){
    //ans will store the value of gcd
    int ans=1;

    //Making numbers positive
    if(n1<0){
        n1=-n1;
    }
    if(n2<0){
        n2=-n2;
    }
    
    for(int i=1; i<=n1; i++){
        if (n1%i==0 && n2%i==0){
            ans=i;
        }
    }
    return ans;
}