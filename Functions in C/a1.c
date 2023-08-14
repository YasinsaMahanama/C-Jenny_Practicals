#include<stdio.h>
#include<conio.h>

void sum()
{
    int a,b,sum=0;

    printf("\n\nEnter values of numbers : \n");
    printf("\ta = ");
    scanf("%d",&a);
    printf("\tb = ");
    scanf("%d",&b);

    sum = a+b;
    printf("\n\nSUM = %d",sum);

getch();
}

void main()
{
    sum();
    sum();
    printf("\n\nHello");
    sum();
}
