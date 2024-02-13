//GCD (Non-Recursion)

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
    int i, r;
    while(y!=0)
    {
        r = x % y;
        x = y;
        y = r;
    }
    return x;
}