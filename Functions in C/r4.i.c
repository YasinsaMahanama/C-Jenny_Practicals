#include<stdio.h>
#include<conio.h>

void print(int a)
{
    if(a<1)
        return 0;
    else
        return 1 + print(a/2);
}

void main()
{
    int x;
    x = print(10);
    printf("%d\n",a);
getch();
}
