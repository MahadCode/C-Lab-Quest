#include<stdio.h>

int main(){
    int count=0;        
    int inputs;   
    while(count!=1){
        printf("Enter the number of inputs (>=2):  ");
        scanf("%d", &inputs);
        if(inputs<2){
            printf("ERROR: Invalid Input!!\n");
        }
        else{
            count=1;
        } 
    }

    int num;
    int i=1;
    int larg=0;
    int small=0;
    while(i<=inputs){
        printf("Enter number %d:", i);
        scanf("%d", &num);
        if(num>larg){
            larg=num;
        }
        if (i==1){
            small=num;
        }
        if(i>=2)
        if(small<larg)
        {
            small=larg;
        }
        i++;
    }
    printf("Largest number is: %d\n", larg);
    printf("Second largest number is: %d\n", small);
    return 0;
}