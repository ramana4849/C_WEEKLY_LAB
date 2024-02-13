// PRODUCT OF 2 NUMBERS (Functions: With Arg, With Return type)

#include<stdio.h>
#include<conio.h>

int prod(int a, int b);

void main()
{
    int a, b, c;
    printf("Enter the value of a and b: \n");
    scanf("%d%d", &a, &b);
    c = prod(a, b);
    printf("The Product = %d", c);
}

int product(int x, int y)
{
    int z;
    z = x * y;
    return z;
}