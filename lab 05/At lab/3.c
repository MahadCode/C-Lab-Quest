#include<stdio.h>

int main(){
    int n;
    printf("Enter the number(n)");
    scanf("%d", &n);
    if(n>=5 && n<=100){
        int i=1;
        float sum=0;
        float j=0;
        while(i<=n){          
          int k=1;
          if(i%2==0){
            k=-1;
          }
          float current;
          if(i==1){
            current=4;
          }
          else{
           current=(1/(3+j));
           current=4*current*k;
          }  
          sum=sum+current;
          if(i>1){
            j=j+2;
          }
          i++;
        }
        printf("%.2f", sum);

    }

}