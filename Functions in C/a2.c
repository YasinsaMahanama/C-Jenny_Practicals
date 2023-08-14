#include<stdio.h>
#include<conio.h>

void sum(void); //function declaration
void main()
{
    sum();      //function calling
}

void sum()      //function definition
{
    int a,b,sum=0;
    printf("Enter the value of numbers : \n");
    printf("\ta = ");
    scanf("%d",&a);
    printf("\tb = ");
    scanf("%d",&b);

    sum = a+b;
    printf("\nSUM = %d",sum);

getch();
}
