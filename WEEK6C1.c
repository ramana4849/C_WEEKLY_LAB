//  Linear Search

#include<stdio.h>
#include<conio.h>

void main()
{
    int a[100], i, n, key, flag=0;
    printf("Array size: ");
    scanf("%d", &n);
    printf("Enter %d Array elements: ");
    for(i=0; i<n;i++)
        scanf("%d", &a[i]);
    
    printf("Enter Key value to search: ");
    scanf("%d", &key);
    for(i=0; i<n; i++)
    {
        if(key == a[i])
        {
            flag = 1;
            break;
        }
    }
    
    if(flag == 1)
        printf("%d element is found at a[%d]", key, i-1);
    else
        printf("%d element not found");

    getch();
}