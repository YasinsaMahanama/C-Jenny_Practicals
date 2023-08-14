#include<stdio.h>
#include<conio.h>

void main()
{
    int a = 10;
    int *p = &a;
    int **q = &p;
    int ***r = &q;

    printf("a = %d %d %d %d",a,*p,**q,***r);
    printf("\n\nAddress of q = %x %x",r,&q);
     printf("\n\nAddress of p = %x %x",q,&p);

    **q = 25;
    printf("\n\na = %d %d %d %d",a,*p,**q,***r);

    *q = 25;
    printf("a = %d %d %d %d",a,*p,**q,***r);

 getch();
}
