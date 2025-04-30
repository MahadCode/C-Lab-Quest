#include<stdio.h>

int main(){
    int row=10;
    int i=1;
    while(i<=row){
        int j=1;
        int k=10-i;
        while(j<=(row-k))
        {
            if (i%2==0)
            { 
            if (i==10)
            {  printf("%d ", i); }
            else
            {  printf ("%d  ", i); }
            }
            else{
            printf("%d  ", j);
            }
            j=j+1;
        }
        printf("\n");
        i=i+1;
    }
    return 0;
}