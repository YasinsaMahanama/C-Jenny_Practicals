#include<stdio.h>
#include<conio.h>

int *f()
{
    int a = 10;
    return &a;
}

void main()
{
    int *ptr = f();
    printf("%d",*ptr);
getch();
}

