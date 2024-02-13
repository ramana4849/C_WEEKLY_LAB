#include<stdio.h>
#include<conio.h>

void main()
{
 signed char ch='c', k;
 short int si=5;
 int i=6, r;
 long int li=7;
 float f=5.6, j;
 double d=7.8, m;
 unsigned int ui=-3;
 clrscr();
  printf("Initialization values\nch= %c,\nsi=%hd,\ni=%d,\nli=%ld,\nf=%f,\nd=%lf,\nui=%i\n",ch,si,i,li,f,d,ui);
 r=89;
 j=32.5;
 k='h';
 m=d;
  printf("Assignment values\nr=%d \nj=%f \nk=%c \nm=%lf",r,j,k,m);
 getch();
}
