#include<stdio.h>
#include<conio.h>

void sum(int,float); //function declaration
void main()
{
    sum(5,6.5);      //function calling
}

void sum(int a,float b)      //function definition
{
    int sum=0;
    sum = a+b;
    printf("\nSUM = %d",sum);

getch();
}


