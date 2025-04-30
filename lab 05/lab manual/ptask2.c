/*Complete the following code in which:
Function finds all the prime numbers between a given interval
Displays the prime numbers on the Console*/
#include<stdio.h>
void findprimenumbers(int, int);

int main(){
    int firstnumber, secondnumber;
    scanf("%d", &firstnumber);
    scanf("%d", &secondnumber);
    findprimenumbers(firstnumber, secondnumber);
    return 0;
}

void findprimenumbers(int num1, int num2){
    int i=num1+1;
    while(i<num2){
        int count=1;
        for (int j=2; j<i; j++){
            if (i%j==0){
                count=0;
                break;
            }
            else{
                count=1;
            }
        }
        if (count==1){
            if(i==num1+1){
               printf("Prime Numbers: "); 
            }
            printf("%d ", i);
        }
    i++;    
    }
}