#include<stdio.h>

int main(){
    int row=10;
    int i=row;
    while(i>=1)
    {
      int j=1;

      while(j<=row)
      {
        int k=row-j;

        if (k>(10-i) )
        { printf("  "); }

        else
        {
          if (i==10 || i==5)
          { printf(" *"); }
          else{   
            printf(" %d", i); }
        }

        j=j+1;  
      }
      printf("\n");
    i=i-1;   
    }
}