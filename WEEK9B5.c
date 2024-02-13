//Fibonacci (Non-Recursion)

#include<stdio.h>
#include<conio.h>

int fib(int);

int main()
{
    int n;
    printf("Enter Sequence length: ");
    scanf("%d", &n);
    fib(n);

    return 0;
}

int fib(int n)
{
    int, i , x=0, y=1, z;
    printf("%d%4d", x, y);
    for(i=0; i<n; i++)
    {
        z = x + y;
        printf("%4d", z);
        x = y;
        y = z;
    }
    return 0;
}