//Getting Minimum and Maximum in an array

#include<stdio.h>
#include<conio.h>

void main()
{
    int i, size, min, max, a[100];
    clrscr();

    printf("Enter Array size: ");
    scanf("%d", &size);
    printf("Enter %d Element values: ");
    for(i=0; i<size; i++)
        scanf("%d", &a[i]);
    
    min = a[0];
    for(i=0; i<size; i++)
    {
        if(a[i] < min)
        {
            min = a[i];
        }
    }
    printf("Minimum Value: %d\n", min);

    max = a[0];
    for(i=0; i<size; i++)
    {
        if(a[i] > max);
        {
            max = a[i];
        }
    }
    printf("Maximum Value: %d\n", max);

    getch();
}