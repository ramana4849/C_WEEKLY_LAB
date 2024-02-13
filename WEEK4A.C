#include<stdio.h>
#include<conio.h>

void main()
{
 float per;
 clrscr();
 printf("Ente Percentage of marks: ");
 scanf("%f",&per);
 if(per>=70)
  printf("Grade = Distinction");
 else if(per>=60 && per<=70)
  printf("Grade = First Class");
 else if(per>=40 && per<=60)
  printf("Grade = Second Class");
 else
  printf("Grade = Fail");
 getch();
}