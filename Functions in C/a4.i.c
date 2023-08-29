#include<stdio.h>
#include<conio.h>

void fun(int*,int*);
void main()
{
    int x = 5, y = 7;
    fun(&x,&y);
    printf("Inside main(Calling Function)\n");
    printf("X = %d\nY = %d",x,y);
getch();
}

void fun(int *x,int *y)
{
    *x = 7, *y = 5;
    printf("Inside function(Called Function)\n");
    printf("X = %d\nY = %d\n\n",*x,*y);
}

