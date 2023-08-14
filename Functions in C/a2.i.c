#include<stdio.h>
#include<conio.h>

float sum(); //function declaration
void main()
{
    sum(5,7);      //function calling
}

float sum()      //function definition
{
    float a,b,sum=0;
    printf("Enter the value of numbers : \n");
    printf("\ta = ");
    scanf("%f",&a);
    printf("\tb = ");
    scanf("%f",&b);

    sum = a+b;
    printf("\nSUM = %.2f",sum);

getch();
}

