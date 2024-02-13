#include<stdio.h>
#include<conio.h>

void main()
{
 char c;
 clrscr();
 printf("Enter a letter from VIBGYOR: ");
 scanf("%c",&c);
 switch(c)
 {
  case 'v':
  case 'V': printf("VIOLET");
	    break;
  case 'i':
  case 'I': printf("INDIGO");
	    break;
  case 'b':
  case 'B': printf("BLUE");
	    break;
  case 'g':
  case 'G': printf("GREEN");
	    break;
  case 'y':
  case 'Y': printf("YELLOW");
	    break;
  case 'o':
  case 'O': printf("ORANGE");
	    break;
  case 'r':
  case 'R': printf("RED");
	    break;
  default : printf("Invalid Character");
	    break;
  }
  getch();
}