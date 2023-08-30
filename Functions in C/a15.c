#include<stdio.h>
#include<conio.h>

int* returnpointer(int[]);

void main()
{
    int a[]={1,2,3,4,5},*p;
    p=returnpointer(a);
    printf("%d",*p);
getch();
}

int* returnpointer(int a[])
{
    a=a+2;
    return a;
}
