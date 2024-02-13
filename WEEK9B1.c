// Factorial (Non-Recursion)

#include<stdio.h>
#include<conio.h>

int factorial(int);

int main()
{
    int n, fact;
    scanf("%d", &n);
    fact = factorial(n);
    printf("Factorial is: %d", fact);
    return 0;
}

int factorial(int n)
{
    int i, fact=1;
    for(i=n; i>=1; i--)
    {
        fact = fact * i;
    }
    return fact;
}