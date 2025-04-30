//C program which print the nth term of fibonacci series
#include<stdio.h>
unsigned long long int series(int);

int main(){
    int n;
    printf("No. of Term of fibonacci series:\n");
    scanf("%d", &n);
    //input validation for negative numbers
    if(n>0){
        printf("Term is: %llu\n", series(n));
    }
    else{
        printf("Invalid Input!Term number must be a naturn number.");
    }
}

//series function will return nth term of series
unsigned long long int series(int n){
    unsigned long long int n1=0;
    unsigned long long int n2=1;
    unsigned long long int ans=0;
    for (int i=2; i<n; i++){
        ans=n2+n1;
        n1=n2;
        n2=ans;   
    }
    if(n==1){
        return n1;
    }
    else if(n==2){
        return n2;
    }
    else{
        return ans;
    }
}
