#include<stdio.h>
#include<conio.h>

void main()
{
    int a[5] = {0,1,-1,10,11};
    int d;
    int* p = &a[0];
    int* q = &a[4];

    d = p - q;
    printf("%d",d);

    *q = 25;
    d = q - p;
    printf("\n\n%d",*q);
    printf("\n\n%d",d);

    *p = 27;
    q = q -3;
    printf("\n\n%d",*q);


    p = p + 3;
    printf("\n\n%d",*p);

    d = p - q;
    printf("\n\n%d",d);


getch();
}

