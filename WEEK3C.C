#include<stdio.h>
#include<conio.h>

void main()
{
 float f,c;
 clrscr();
 printf("Enter Temperature in Fahrenheit: ");
 scanf("%f",&f);
 c=(f-32)*5/9;
 printf("\n%f Fahrenheit = %f Celsius",f,c);
 f=32+(9*c/5);
 printf("\n%f Celsius = %f Fahrenheit",c,f);
 getch();
}

