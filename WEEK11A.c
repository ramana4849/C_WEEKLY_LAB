//Student marks structure

#include<stdio.h>
#include<conio.h>

struct student
{
    int rno;
    int mr[6];
    float total;
    float avg;
};

void main()
{
    struct student s[65];
    int m, n, i, j;
    clrscr();
    printf("No. of Students & No. of Subjects: ");
    scanf("%d%d", &n, &m);

    for(i=0; i<n; i++)
    {
        printf("Roll No. of s[%d] Student: ");
        scanf("%d", &s[i].rno);
        for(j=0; i<m; j++)
        {
            printf("Marks of s[%d] Student in mr[%d] Subject: ", i, j);
            scanf("%d", &s[i].mr[j]);
        }
    }

    for(i=0; i<n; i++)
    {
        s[i].total = 0;
        for(j=0; i<m; j++)
        {
            s[i].total = s[i].total + s[i].mr[j];
        }
        printf("Total Marks of s[%d] student: %f", i, s[i].total);

        s[i].avg = (s[i].total)/m;
        printf("Average marks of s[%d] student: %f", i, s[i].avg);
    }

    getch();
    
}