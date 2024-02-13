//Addition and Multiplication of Complex Numbers

#include<stdio.h>
#include<conio.h>

struct complex
{
    int a, b;
};

void main()
{
    struct complex c1, c2;
    int choice;

    printf("Real & Imaginary parts of 1st Complex No. \n");
    scanf("%d%d", &c1.a, &c1.b);
    printf("Real & Imaginary parts of 2nd Complex No. \n");
    scanf("%d%d", &c2.a, &c2.b);

    printf("1.Addition or 2.Sutraction: ");
    scanf("%d", choice);

    if(choice==1)
    {
        printf("Addition: %d + i%d", c1.a+c2.a, c1.b+c2.b);
    }
    else
    {
        printf("Addition: %d + %d", (c1.a*c2.a)-(c1.a*c2.b), (c1.a*c2.b)+(c1.b*c2.a));
    }

    getch();
    
}