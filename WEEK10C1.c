//Palyndrome check (Without Built-in Functions)

#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
    char s[30];
    int i , j, len, flag=1;

    printf("Enter String: ");
    gets(s);

    for(i=0; s[i]!='\0'; i++)
        len++;
    for(i=0, j=len-1; i<(len/2); i++, j--)
    {
        if(s[i]!=s[j])
            flag = 0;
    }

    if(flag==1)
        printf("\nGivem String is Playndrome");
    else
        printf("\nGivem String is not a Playndrome");

    getch();
}