#include<stdio.h>
#include<conio.h>

void sum(int,int); //function declaration
void main()
{
    sum(5,7);      //function calling
}

void sum(int a,int b)      //function definition
{
    int sum=0;
    sum = a+b;
    printf("\nSUM = %d",sum);

getch();
}


