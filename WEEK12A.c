//Display Contents of file

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void main()
{
    char ch, str[20];
    FILE *f1;
    clrscr();

    printf("Enter File Name: ");
    gets(str);

    f1 = fopen(str, "r");
    if(f1==NULL)
    {
        printf("Error opening File!");
        getch();
        exit(0);
    }

    ch = fgetc(f1);
    while(ch!=EOF)
    {
        putchar(ch);
        ch = fgetc(f1);
    }
    fcloseall();

    getch();
}