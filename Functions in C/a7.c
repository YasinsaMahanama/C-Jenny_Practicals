#include<stdio.h>
#include<conio.h>

int sum(int,int);

void main()
{
    int x,y,C;
    /*printf("Enter X and Y :\n");
    printf("\tX = ");
    scanf("%d",&x);
    printf("\tY = ");
    scanf("%d",&y);*/
    C = sum(3,5);
    printf("\nSUM = %d",C);
}

int sum(int a,int b)
{
    int S = 0;
    S = a+b;
    return S;
}

