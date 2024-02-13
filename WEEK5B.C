#include<stdio.h>
#include<conio.h>
void main()
{
 int i,j,n,count=0;
 clrscr();
 printf("Enter any positive number:");
 scanf("%d",&n);
 for(i=2;i<=n;i++)
 {
  for(j=2;j<=i;j++)
  {
   if(i%j==0)
    count++;
  }
  if(count==1)
  printf("%d \t",i);
  count=0;
 }
 getch();
}