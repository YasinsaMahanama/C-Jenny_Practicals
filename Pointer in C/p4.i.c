#include<stdio.h>
#include<conio.h>

void main()
{
    int a[5] = {0,1,-1,10,11};
    int* p = &a[0];
    printf("%d",*p);

    p = p + 1;
    printf("\n\n%d",*p);

    p = p + 2;
    printf("\n\n%d",*p);

    *p = 2;
    printf("\n\n%d",*p);

    printf("\n\nAddress of element is : %u",p);

getch();
}

