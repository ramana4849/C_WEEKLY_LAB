//GCD (Recursion)

#include<stdio.h>
#include<conio.h>

int gcd(int, int);

int main()
{   
    int a, b, res;
    printf("Enter the value of a and b: \n");
    scanf("%d%d", &a, &b);
    res = gcd(a, b);
    printf("GCD = %d", res);

    return 0;
}

int gcd(int x, int y)
{
    if(y == 0)
        return x;
    else
        return gcd(y, y % x);
}