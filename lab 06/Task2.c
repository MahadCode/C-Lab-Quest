/*Write a function distance that calculates the distance between two points (x1, y1) and (x2, y2).
All numbers and return values should be of type double.*/
#include<stdio.h>
#include<math.h>
double distance(double,double,double,double);

int main(){
    //Taking input of two points
    double x1, x2, y1, y2;
    printf("Enter the x-component of 1st point(x1):\n");
    scanf("%lf", &x1);
    printf("Enter the y-component of 1st point(y1):\n");
    scanf("%lf", &y1);
    printf("Enter the x-component of 2nd point(x2):\n");
    scanf("%lf", &x2);
    printf("Enter the y-component of 2nd point(y2):\n");
    scanf("%lf", &y2);

    //printing the distance
    printf("Distance between these points %lf", distance(x1, y1, x2, y2));
    return 0;
}

//distance function which will return the distance
double distance(double x1,double y1,double x2,double y2){
    double dis;
    dis=((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1));
    dis=sqrt(dis);
    return dis;
}