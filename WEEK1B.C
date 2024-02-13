#include<stdio.h>
#include<conio.h>
#include<limits.h>
#include<float.h>

void main()
{
 clrscr();
 printf("The number of bits in a byte: %d\n", CHAR_BIT );
 printf("SIGNED CHAR : size= %d and range= %d to %d\n", sizeof(signed char), SCHAR_MIN, SCHAR_MAX);
 printf("CHAR        : size= %d and range= %d to %d\n", sizeof(unsigned char), 0, CHAR_MAX);
 printf("UNSIGNED INT: size= %d and range= %d to %ld\n",sizeof(unsigned int), 0, UINT_MAX);
 printf("SHORT INT   : size= %d and range= %d to %d\n", sizeof(signed int), SHRT_MIN, SHRT_MAX);
 printf("INT         : size= %d and range= %d to %d\n", sizeof(int), INT_MIN, INT_MAX);
 printf("LONG INT    : size= %d and range= %ld to %ld\n", sizeof(long int), LONG_MIN, LONG_MAX);
 printf("FLOAT       : size= %d and range= %.10e to %.10e\n", sizeof(float), FLT_MIN, FLT_MAX);
 printf("DOUBLE      : size= %d and range= %.10e to %.10e\n", sizeof(double), DBL_MIN, DBL_MAX);
 getch();
}
