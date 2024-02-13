#include<stdio.h>
#include<stdio.h>
#include<math.h>
void main()
{
 int x,n,sum=0,i;
 clrscr();
 printf("Enter X value: ");
 scanf("%d",&x);
 pos:printf("\nEnter positive n value:");
     scanf("%d",&n);
 if(n<0)
 {
  printf("Entered n value is negative, give a positive value");
  goto pos;
 }
 else
 {
  for(i=0;i<=n;i++)
  {
   sum=sum+pow(x,i);
  }
  printf("\nSum of %d terms = %d",n,sum);
 }
 getch();
}