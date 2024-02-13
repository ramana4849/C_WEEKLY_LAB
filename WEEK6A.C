#include<stdio.h>
#include<conio.h>

void main()
{
    int i, num, arr[50], sum=0;
    clrscr();
    printf("Enter the number of elements: ");
    scanf("%d", &num);
    
    printf("Enter the %d values: ", num);
    for(i=0; i<num; i++)
        scanf("%d", &arr[i]);
    for(i=0; i<num; i++)
        sum = sum + arr[i];
    for(i=0; i<num; i++)
        printf("a[%d] = %d\n", i, arr[i]);

    printf("Sum = %d", sum);
    getch();
}