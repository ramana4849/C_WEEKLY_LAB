//Copy 1 file to other (Lower Case to Upper Case)

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void main()
{
    char ch, str1[20], str2[20];
    FILE *f1, *f2;
    clrscr();

    printf("Enter 1st File Name: ");
    gets(str1);
     printf("Enter 2nd File Name: ");
    gets(str2);

    f1 = fopen(str1, "r");
    f2 = fopen(str2, "w");
    if(f1==NULL || f2==NULL)
    {
        printf("Error opening File!");
        getch();
        exit(0);
    }

    ch = fgetc(f1);
    while(ch!=EOF)
    {
        if((ch > 'a') && (ch < 'z'))
            ch = ch - 32;
        fputc(ch, f2);
        ch = fgetc(f1);
    }
    fcloseall();

    printf("Copying Successful");

    getch();

}