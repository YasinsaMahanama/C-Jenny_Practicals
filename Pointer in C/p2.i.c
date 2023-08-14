#include<stdio.h>
#include<conio.h>

void main()

{
    int a=10, b=11;
    int *p, *q;

    p=&a,q=&b;
    *q = *p;

    printf("a = %d %d %d",a,*p,*q);
    printf("\n\nb = %d %d",b,*q);

getch();
}

