//Matrix Transpose

#include<stdio.h>
#include<conio.h>

void main()
{
    int i, j, k, r, c, a[10][10], b[10][10];

    printf("Row and Column size of 1st matrix: ");
    scanf("%d%d", r, c);

    if(r==c)
    {
        //input
        printf("Elements of the Matrix: ");
        for(i=0; i<r; i++)
        {
            for(j=0; j<c; j++)
                scanf("%d", &a[i][j]);
        }

        //processing
        for(i=0; i<r; i++)
        {
            for(j=0; j<c; j++)
                b[j][i] = a[i][j];
        }

        //output
        printf("The given Matrix is: \n");
        for(i=0; i<r; i++)
        {
            for(j=0; j<c; j++)
                printf("%d", a[i][j]);
            printf("\n");
        }
        printf("The Transpose of Matrix is: \n");
        for(i=0; i<r; i++)
        {
            for(j=0; j<c; j++)
                printf("%d", b[i][j]);
            printf("\n");
        }

        getch();
    }