#include<stdio.h>
#include<conio.h>
void main()
{
 int n,p,i,s=0;
 clrscr();
 printf("Enter the number: ");
 scanf("%d",&n);
 for(i=0;i!=n;i++)
 {
  if(n>0)
  {
   p=n%10;
   s=s+p;
   n=n/10;
  }
  else
  break;
 }
 printf("Sum of individual digits of given number= %d",s);
 getch();
}
