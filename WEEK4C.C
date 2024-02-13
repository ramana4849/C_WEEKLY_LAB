#include<stdio.h>
#include<conio.h>

void main()
{
 int choice, num1, num2;
 clrscr();
 printf("1.Addition \n2.Subtraction \n3.Multiplication \n4.Division \n5.Remainder \nChoose what to do: ");
 scanf("%d",&choice);
 printf("\nEnter the numbers to apply the operation on: ");
 scanf("%d%d",&num1,&num2);
 switch(choice)
 {
	 case 1: printf("\nAddition: %d + %d = %d",num1, num2, num1+num2);
	   break;
	 case 2: printf("\nSubtraction: %d - %d = %d",num1, num2, num1-num2);
	   break;
	 case 3: printf("\nMultiplication: %d * %d = %d",num1, num2, num1*num2);
	   break;
	 case 4: printf("\nDivision: %d / %d = %d",num1, num2, num1/num2);
	   break;
	 case 5: printf("\nRemainder: %d % %d = %d",num1, num2, num1%num2);
	   break;
         default: printf("\nInvalid Choice");
	    break;
 }
 getch();
}
