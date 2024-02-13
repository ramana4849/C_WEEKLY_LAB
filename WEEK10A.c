//String Built-in Functions

#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
    char s1[20], s2[20], s3[20];
    clrscr();

    printf("Enter string 1: ");
    gets(s1);
    printf("Enter string 2: ");
    gets(s2);
    printf("Enter String 3: ");
    gets(s3);

    //copy
    printf("\nCopying s3 to s1: %s", strcpy(s1, s3));
    //compare
    printf("\nCompareing s1, s2: %d", strcmp(s1, s2));
    //concatente
    printf("\nConcatenationg s1, s2: %s", strcat(s1, s3));
    //length
    printf("\nLength of s1: %d", strlen(s1));
    //reverse
    printf("\nReverse of s2: %s", strrev(s2));

    getch();
}