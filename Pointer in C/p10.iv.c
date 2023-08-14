#include<stdio.h>
#include<conio.h>

void main()
{
    int *ptr1;
    int *ptr2;

    if(ptr1 == ptr2)
    {
        printf("both are unitialized");
    }
    else
    {
         printf("%d\n",ptr1); //print the garbage value
    }



getch();
}







