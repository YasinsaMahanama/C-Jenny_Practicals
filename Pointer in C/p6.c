#include<stdio.h>
#include<conio.h>

void main()
{
    int a[] = {3,2,67,0,56};
    int *p;
    p = &a[0];

    printf("%d",*p++);
    printf("\n\n%d",*++p);
    printf("\n\n%d %d",*p++,*p++);

    p = &a[3];
    printf("\n\n%d",*p--);
    printf("\n\n%d",*--p);
    printf("\n\n%d %d",*p--,*p--);
getch();
}
