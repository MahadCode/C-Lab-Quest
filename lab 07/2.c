#include<stdio.h>

int main(){
    float a;
    printf("Enter +ve part of first number:\n");
    scanf("%f", &a);
    
    float b;
    printf("Enter -ve part of frst number:\n");
    scanf("%f", &b);

    float c;
    printf("Enter +ve part of second number:\n");
    scanf("%f", &c);

    float d;
    printf("Enter -ve part of second number:\n");
    scanf("%f", &d);

    printf("First Complex:\n %.3f+(%.3f)i\n", a,b);
     printf("Second Complex:\n %.3f+(%.3f)i\n", c,d);

    printf("Sum is  \n%.3f + (%.3f)i\n", a+c,b+d);

    printf("Differnce is \n%.3f + (%.3f)i\n", a-c,b-d);
    
    float e=a*c+(b*d*(-1));
    float f=b*c+a*d;
    printf("Product is \n%.3f + (%.3f)i\n", e,f);

    e=a*c+b*d;
    f=b*c-a*d;
    float j=c*c+d*d;
    printf("Division is \n( %.3f + (%.3f)i )/%.3f\n", e,f,j);
    return 0;
}