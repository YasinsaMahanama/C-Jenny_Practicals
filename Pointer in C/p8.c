#include<stdio.h>
#include<conio.h>

void main()
{
    int a = -11;     const int a = -11;     const int a = -11;
    int *p = &a;     int a = -11;           const int *p = &a;

    *p = 10;
    printf("%d",a);
getch();
}
