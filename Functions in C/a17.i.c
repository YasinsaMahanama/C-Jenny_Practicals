#include<stdio.h>
#include<conio.h>

int sum(int,int);

void main()
{
    int s=0;
    int (*ptr)(int,int)=sum;
    s=(ptr)(1,2);
    printf("SUM = %d\n",s);
getch();
}

int sum(int a,int b)
{
    return a+b;
}

