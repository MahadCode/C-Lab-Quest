#include<stdio.h>

int main(){
    int a;
    printf("Enter the first term of sequence(a):  ");
    scanf("%d", &a);
    int d;
    printf("Enter the common difference(d):  ");
    scanf("%d", &d);
    int n;
    printf("Enter the number of terms of sequence:  ");
    scanf("%d", &n);
    
    if(n>=0){
    for(int i=0; i<n; i++){
        int current_num=0;
        current_num=a+(i*d);
        printf("%d,", current_num);    
    }
    printf("\b");
    }
    else{
        printf("Invalid Input!'n' can't be negative");
    }
    return 0;

}