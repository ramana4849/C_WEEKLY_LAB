#include<stdio.h>\
#include<conio.h>

void main()
{
 int a,b;
 clrscr();
 printf("Enter a, b values: ");
 scanf("%d%d",&a,&b);
 printf("Addition: a + b=%d \nSubtraction: a - b=%d \nMultiplication: a * b=%d \nDivision: a / b=%d \nRemainder: a %% b=%d",a+b,a-b,a*b,a/b,a%b);
 getch();
}