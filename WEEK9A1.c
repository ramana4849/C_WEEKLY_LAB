//NUMBER SWAP (Call by Value)

#include<stdio.h>
#include<conio.h>

int swap(int, int);

int main()
{
    int a, b;
    printf("Enter the value of a and b: \n");
    scanf("%d%d", &a, &b);
    swap(a, b);
    printf("In main a = %d, b = %d", a, b);
    return 0;
}

int swap(int x, int y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;
    printf("After swapping a = %d, b = %d\n", x, y);
    return 0;
}