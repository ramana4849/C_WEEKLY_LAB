//Find x^n (Recursion)

#include<stdio.h>

int power(int, int);

int main()
{
    int x, n, res;
    printf("Enter Exponent and power: ");
    scanf("%d%d", &x, &n);
    res = power(x, n);
    printf("%d ^ %d = %d", x, n, res);

    return 0;
}

int power(int x, int y)
{
    int n;
    if(n!=0)
        return (x * power(x, n-1));
    else
        return 1;
}