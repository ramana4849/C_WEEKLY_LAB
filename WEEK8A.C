// PRODUCT OF 2 NUMBERS (Functions: No Arg, No Return type)

#include<stdio.h>
#include<conio.h>

void prod();

int main()
{
    prod();
    return 0;
}

void prod()
{
    int a, b, c;
    printf("Enter the value of a and b: \n");
    scanf("%d%d", &a, &b);

    c = a * b;
    printf("%d * %d = %d", a, b, c);
}
