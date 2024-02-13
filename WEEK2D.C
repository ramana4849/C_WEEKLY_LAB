#include<stdio.h>
#include<conio.h>

void main()
{
 int a,b;
 clrscr();

//Read values from user
 printf("Enter a, b values: ");
 scanf("%d%d",&a,&b);

//printing required output
 printf("\nValue of a = %d\nValue of b = %d",a,b);
 printf("\nPre Increment of a,b = %d, %d", ++a,++b);
 printf("\nPost Increment of a,b = %d, %d", a++,b++);
 printf("\na++ + ++b = %d",a++ + ++b);
 printf("\nPre Decrement of a,b = %d, %d",--a, --b);
 printf("\nPost Decrement of a,b = %d, %d",a--, b--);
 printf("\na-- + --b = %d",a-- + --b);
 printf("\n++b - ++a = %d", ++b - ++a);
 printf("\na++ + b++ - ++a = %d", a++ + b++ - ++a);
 getch();
}