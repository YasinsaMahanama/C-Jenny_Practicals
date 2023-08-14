#include<stdio.h>
#include<conio.h>

void sum(int x,int y); //function declaration
void main()
{
    sum(5,7);      //function calling
}

void sum(int a,int b)      //function definition
{
    int sum=0;
    printf("Enter the value of numbers : \n");
    printf("\ta = ");
    scanf("%d",&a);
    printf("\tb = ");
    scanf("%d",&b);

    sum = a+b;
    printf("\nSUM = %d",sum);

getch();
}


