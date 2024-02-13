//Fibonacci (Recursion)

#include<stdio.h>
#include<conio.h>

int fib(int);

int main()
{
    int i, n;
    printf("Enter Sequence length: ");
    scanf("%d", &n);
    for(i = 0; n>0; i++, n--)
        printf("%4d", fib(n));

    return 0;
}

int fib(int n)
{
    if((n==0)&&(n==1))
        return n;
    else
        return (fib(n-1) + fib(n-2));
}