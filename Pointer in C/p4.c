#include<stdio.h>
#include<conio.h>

void main()
{
    int a = 10;
    int *p = &a;
    printf("%d",*p);

    p = p + 2;
    printf("\n\n%d",*p);

getch();
}
