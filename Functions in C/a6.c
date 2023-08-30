#include<stdio.h>
#include<conio.h>

void sum(float,float);

void main()
{
    float x,y;
    printf("Enter X and Y :\n");
    printf("\tX = ");
    scanf("%f",&x);
    printf("\tY = ");
    scanf("%f",&y);
    sum(x,y);
}

void sum(float a,float b)
{
    float S = 0;
    S = a+b;
    printf("\nSUM = %f",S);
}
