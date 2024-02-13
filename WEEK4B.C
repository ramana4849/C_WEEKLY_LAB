#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
 float a, b, c, d, r1, r2;
 clrscr();
 printf("Enter a, b, c values: ");
 scanf("%f%f%f",&a,&b,&c);
 d=(b*b)-(4*a*c);
 if(d>0)
 {
   printf("Roots are real and distinct\n");
   r1=(-b+(sqrt(d)))/(2*a);
   r2=(-b-(sqrt(d)))/(2*a);
   printf("root 1 = %f\n",r1);
   printf("root 2 = %f\n",r2);
 }
 else
  if(d==0)
  {
   printf("Roots are real and equal\n");
   r1=-b/(2*a);
   r2=-b/(2*a);
   printf("root 1 = %f\n",r1);
   printf("root 2 = %f\n",r2);
  }
 else
   printf("Roots are Imaginary");
 getch();
}
