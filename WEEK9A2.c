// NUMBER SWAP (Call by Refernce)

#include<stdio.h>
#include<conio.h>

int swap(int *, int *);

int main()
{
    int a, b;
    printf("Enter the value of a and b: \n");
    scanf("%d%d", &a, &b);
    printf("Before Swapping a = %d, b = %d", a, b);
    swap(&a, &b);
    return 0;
}

int swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
    printf("After Swapping a = %d, b = %d", *x, *y);
}