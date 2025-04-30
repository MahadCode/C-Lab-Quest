#include<stdio.h>

int main(){
   int row=6;
   int i=1;
   while(i<=row)
   {
    int j=1;
    int k=i-1;
    while(j<=row){
    if(i==1 || j==1){
        printf("%d  ", j);
    }
    else{
        int t=j+k;
        if (t>=10)
        { printf("%d ", t); }
        else{
         printf("%d  ", t);   
        }
    }
    if (i==2)
    { if (j!=1)
     { k++; }
    }
    else if (i==3)
    {
        if (j!=1)
        { k=k+2; }
    }
    else if (i==4)
    {
        if (j!=1)
        { k=k+3; }
    } 
    else if (i==5)
    {
        if (j!=1)
        { k=k+4; }        
    }
    else
    {
       if (j!=1)
       { k=k+5; }  
    }
    j++;    
    }
    i++;
    printf("\n");
   }
   return 0; 
}