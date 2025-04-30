#include<stdio.h>

int main(){
    int x=10;
    while(x<=20){
        if(x%5==0){
            printf("%d\t", x);
            x=x+2;
        }
        else{
            printf("%d\t", x);
            x=x+5;
        }
        ++x;
    }
}