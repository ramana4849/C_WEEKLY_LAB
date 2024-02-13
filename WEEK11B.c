//Passing an Entire Structure to function

#include<stdio.h>
#include<conio.h>

struct student
{
    int sid;
    char sname[30];
    float per;
};

void display(struct student *);

void main()
{
    struct student s1, *ptr;
    clrscr();

    ptr = &s1;
    printf("Enter Student Details: ");
    scanf("%d %s %f", ptr->sid, ptr->sname, ptr->per);
    display(ptr);
    getch();
}

void display(struct student *s2)
{
    printf("\nR.No: %d\nName:   %s\nPercentage: %f", s2->sid, s2->sname, s2->per);
}