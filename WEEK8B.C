// DIFFERENCE OF 2 NUMBERS (Functions: No Arg, With Return type)

#include<stdio.h>
#include<conio.h>

int diff();

int main()
{
    int diff;
    diff = diff();
    printf("The differnece of given No.s = %d", diff);
    return 0;
}

int diff()
{
    int a, b, c;
    printf("Enter the value of a and b: \n");
    scanf("%d%d", &a, &b);
    c = a - b;
    return c;
}