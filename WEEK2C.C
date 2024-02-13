#include<stdio.h>
#include<conio.h>

void main()
{
 int a,b;
 clrscr();
 printf("Enter a,b values: ");
 scanf("%d%d",&a,&b);
 a==b?printf("Given numbers are equal"):printf("Given numbers are not equal");
 getch();
}