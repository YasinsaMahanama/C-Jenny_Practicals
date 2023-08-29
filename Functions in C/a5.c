#include<stdio.h>
#include<conio.h>

int sum(void); //function declaration
void main()
{
    int S;
    S = sum();
    printf("\nSUM = %d",S);     //function calling
}

int sum()      //function definition
{
    int a,b,sum=0;
    printf("Enter the value of numbers : \n");
    printf("\ta = ");
    scanf("%d",&a);
    printf("\tb = ");
    scanf("%d",&b);

    sum = a+b;

    return sum;
    printf("\nInside Function");  // Not print statement that written after return
}

