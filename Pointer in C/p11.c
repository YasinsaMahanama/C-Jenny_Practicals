#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

void main()
{
    int*ptr = (int*)malloc(sizeof(int));
    *ptr = 10;
    printf("%d\n",*ptr);
    free(ptr);
    printf("%d\n",*ptr);  //garbage value
    ptr=NULL;
    if(ptr==NULL)
    {
        printf("there is null pointer");
    }
    else
    {
        printf("%d",*ptr);
    }
getch();
}
