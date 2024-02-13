//Factorial (Recursion)

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

int factorial(int x)
{
    int f;
    if(x == 0)
        return 1;
    else
        f = x * factorial(x-1);
    return f;
}