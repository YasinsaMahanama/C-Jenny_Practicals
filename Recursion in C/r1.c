#include<stdio.h>
#include<conio.h>

void display (int n)
{
    if(n<1)
        return;
    else
    {
        printf("%d\n",n);
        display(n-1);
        printf("%d\n",n);
    }
}

void main()
{
    int n=3;
    display(n);
getch();
}
