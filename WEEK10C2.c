//Palyndrome check (Without Built-in Functions)

#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
    char s[30];

    printf("Enter String: ");
    gets(s);

    if(strcmp(s, strrev(s))==0)
        printf("\nGivem String is Playndrome");
    else
        printf("\nGivem String is not a Playndrome");
}