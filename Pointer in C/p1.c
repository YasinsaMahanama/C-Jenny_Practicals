#include<stdio.h>
#include<conio.h>

void main()
{
    int a=10, b=9,c;
    int*p,*q;
    p = &a;
    q = &b;
    c=*q;

    printf("Value of a = %d",a);
    printf("\n\na = %d",*p);
    printf("\n\na = %d",p);
    printf("\n\nb = %d",q);
    printf("\n\nb = %d",&q);
    printf("\n\nAddress of a = %x",&a);
    printf("\n\nAddress of a = %x",p);
    printf("\n\nAddress of p = %x",&p);
    printf("\n\nC = %d",c);
    printf("\n\n%x",p);

getch();
}
