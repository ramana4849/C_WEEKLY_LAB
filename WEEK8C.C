// SUM OF 2 NUMBERS (Functions: With Arg, No Return type)

#include<stdio.h>
#include<conio.h>

int add(int a, int b);

void main()
{
    int a, b;
    scanf("%d%d", &a, &b);
    add(a, b);
}

int add(int x, int y)
{
    int z;
    z = x + y;
    printf("The sum = %d", z);
}