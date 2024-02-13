#include<stdio.h>
#include<conio.h>

#define PI 3.14

void main()
{
 float R,A;
 clrscr();
 printf("Enter Radius R value: ");
 scanf("%f",&R);
 A = PI*R*R;
 printf("Area of Circle = %f", A);
 getch();
}
