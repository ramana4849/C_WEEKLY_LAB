//Binary Search

#include<stdio.h>
#include<conio.h>

void main()
{
    int i , n, key, a[100], high, mid, low=0, flag=0;
    
    printf("Enter size of the array: ");
    scanf("%d", &n);
    printf("Enter %d elemnts of the array: ", n);
    for(i=0; i<n; i++)
        scanf("%d", &a[i]);
    
    printf("Enter ket to search: ");
    scanf("%d", &key);
    while(low <= high)
    {
        mid = (low + high)/2;
        if(key == a[mid])
        {
            flag = 1;
            break;
        }
        else if(key > a[mid])
        {
            high = mid - 1;
        }
    }
    
    if(flag == 1)
        printf("%d Element found at a[%d] index: ",key, mid);
    else
        printf("Element not found");

    getch();
}