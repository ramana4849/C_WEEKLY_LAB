//Concatenate strings without strcat

#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
    char s1[30], s2[30];
    int i, j;
    clrscr();

    printf("Enter String 1: ");
    gets(s1);
    printf("Enter String 2: ");
    gets(s2);

    for(i=strlen(s1), j=0; j<strlen(s2); i++, j++)
    {
        s1[i]=s2[j];
    }

    printf("String after concatenation is: %s", s1);

    getch();
}