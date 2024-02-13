//Matrix Addition

#include<stdio.h>
#include<conio.h>

void main()
{
    int i, j, r1, c1, r2, c2, a[10][10], b[10][10], c[10][10];

    printf("Row and Column size of 1st matrix: ");
    scanf("%d%d", r1, c1);
    printf("Row and Column size of 2nd matrix: ");
    scanf("%d%d", r2, c2);

    if((r1==r2) && (c1==c2))
    {
        //input
        printf("Elements of 1st Matrix: ");
        for(i=0; i<r1; i++)
        {
            for(j=0; j<c1; j++)
                scanf("%d", &a[i][j]);
        }
        printf("Elemets of 2nd Matrix: ");
        for(i=0; i<r2; i++)
        {
            for(j=0; j<c2; j++)
                scanf("%d", b[i][j]);
        }

        //processing
        for(i=0; i<r1; i++)
        {
            for(j=0; j<c1; j++)
            {
                c[i][j] = a[i][j] + b[i][j];
            }
        }

        //output
        printf("Resultant Matrix is: \n");
        {
            for(i=0; i<r1; i++)
            {
                for(j=0; j<c1; j++)
                {
                    printf("%d\t", c[i][j]);
                }
                printf("\n");
            }
        }
    }
    else
        printf("Matrix Addition not possible!");

    getch();
}