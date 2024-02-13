#include<stdio.h>
#include<conio.h>

void main()
{
 float P, T, R, I;
 clrscr();
 printf("Enter Principle, Time and Rate: ");
 scanf("%f%f%f", &P,&T,&R);
 I=P*T*R/100;
 printf("Simple Interest = %f",I);
 getch();
}