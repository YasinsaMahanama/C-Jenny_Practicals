#include<stdio.h>
#include<conio.h>

void main()
{
    int *ptr;
    {
        int a = 9;
        ptr = &a;
        printf("a = %d\n",*ptr);
    }
    printf("%d",*ptr);

getch();
}
