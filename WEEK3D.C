#include<stdio.h>
#include<conio.h>

void main()
{
 float r,h;
 float volofsphere, volofcylinder, volofcone;
 clrscr();
 printf("Enter Radius and Height: ");
 scanf("%f%f",&r,&h);
 volofsphere=(4/3)*3.14*r*r*r;
 volofcylinder=3.14*r*r*h;
 volofcone=(0.33)*3.14*r*r*h;
 printf("Volume of Sphere = %f\nVolume of Cylinder = %f\nVolume of Cone = %f",volofsphere,volofcylinder,volofcone);
 getch();
}