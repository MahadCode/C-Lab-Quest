//C program that takes two complex numbers as input from the user, performs operations such as addition, subtraction, multiplication, conjugate calculation and displays the results with proper formatting
#include<stdio.h>

//main function begins here
int main()
{  
   //printing the first complex after taking input
   int real, img;
   printf("Enter the real part of first complex number: \n");
   scanf("%d", &real);
   printf("Enter the imaginary part of first complex number: \n");
   scanf("%d", &img);
   printf("a=%d+(%d)i\n\n", real,img);

   //printing the second complex after taking input
   int real1, img1;
   printf("Enter the real part of second complex number: \n");
   scanf("%d", &real1);
   printf("Enter the imaginary part of second complex number: \n");
   scanf("%d", &img1);
   printf("b=%d+(%d)i\n\n", real,img);

   //Addition of the two complex numbers
   int sum_real=real+real1;
   int sum_img=img+img1;
   printf("Addtion of given complex numbers: \n");
   printf("a+b=%d+(%d)i\n\n\n", sum_real,sum_img);

   //Subtraction of the two complex numbers
   int diff_real=real-real1;
   int diff_img=img-img1;
   printf("Subtraction of given complex numbers: \n");
   printf("a-b=%d+(%d)i\n\n\n", diff_real,diff_img);

   //conjugate of the given complex numbers
   int conjugate_img=-img;
   int conjugate_img1=-img1;
   printf("Conjugate of first complex numbers: \n %d+(%d)i\n", real,conjugate_img);
   printf("Conjugate of second complex numbers: \n %d+(%d)i\n\n\n", real1,conjugate_img1);

   //multiplication of two complex numbers
   int m_real=(real*real1)-(img*img1);
   int m_img=(real*img1)+(img*real1);
   printf("Product of two given numbers: \n");
   printf("a.b = %d+(%d)i", m_real,m_img);

   return 0;

}