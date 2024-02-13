//Compute nCr (Recursion)

#include<stdio.h>

int ncr(int, int);

int main()
{
    int n, r, res;
    printf("Enter n, r values of nCr: ");
    scanf("%d%d", n, r);
    res = ncr(n, r);
    printf("%dC%d = %d", n, r, res);

    return 0;
}

int ncr(int n, int r)
{
    if((r==0) || (n==r))
        return 1;
    else    
        return (ncr(n-1, r-1) + ncr(n-1, r));
}