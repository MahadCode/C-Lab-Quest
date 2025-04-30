//C program to print first 20 roman numbers
#include<stdio.h>

int main(){
int i=1;
int z=1;
for(int n=1; n<=20; n++){
   if(z>10){
      printf("x");
      if(i%11==0){
         i=1;
      }
   }
   if(i<=3){
     for(int j=1; j<=i; j++){
        printf("i");
     }
     puts("");
   }
   else if(i<=5){
      int k=5-i;
      if(k==1){
         printf("i");
      }
      printf("v");
      puts("");
   }
   else if(i<=8){
      int k=i-5;
      printf("v");
      for(int j=1; j<=k; j++){
        printf("i");
     }
     puts("");
   }
   else{
    int k=i-8;
      if(k==1){ 
         printf("i");
      }
      printf("x");
      puts("");  
   }
   z++;
   i++;   
}
}