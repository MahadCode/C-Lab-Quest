//C program to find the length of digit
#include<stdio.h>

int main()
{
    int num;
    printf("Enter your number\n");
    scanf("%d", &num);
    int count=0;
    int i=12;
    while(i==12)
    {
      int rem=num/10;
      count=count+1; 
      if (rem==0)
      { i=-1; } 
    }
    printf("lenth\n %d", count);
    return 0;
}