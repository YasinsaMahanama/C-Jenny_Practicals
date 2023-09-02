#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void main()
{
    int n,i,*ptr;

    printf("Enter the total no of values : ");
    scanf("%d",&n);

    ptr = (int*)calloc(n,sizeof(int));

    /*printf("\nEnter the values : \n");

    for(i=0;i<n;i++)
    {
        scanf("%d",(ptr+i));
    }*/

    printf("\nThe entered values are : \n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",*(ptr+i));   //get output is 0
    }

    free(ptr);
getch();
}


