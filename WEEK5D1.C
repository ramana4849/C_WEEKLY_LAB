#include<stdio.h>
#include<conio.h>
void main()
{
 int i,j,n;
 clrscr();
 printf("Enter the row size:");
 scanf("%d",&n);
 for(i=1;i<=n;i++)
 {
  for(j=1;j<=i;j++)
  {
   printf("%3d",j);
  }
  printf("\n");
 }
 getch();
}