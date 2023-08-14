#include<stdio.h>
#include<conio.h>

void main()
{
    int a[5] = {0,1,-1,10,11};
    int d;
    int* p = &a[0];
    int* q = &a[3];

    d = q - p;
    printf("%d",d);

    q = q - 2;
    printf("\n\n%d",*q);

    d = p - q;
    printf("\n\n%d",d);

    p = p - 1;
    printf("\n\n%d",*p);

getch();
}
