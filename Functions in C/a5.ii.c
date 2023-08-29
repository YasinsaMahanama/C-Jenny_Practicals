#include<stdio.h>
#include<conio.h>

float sum(void); //function declaration
void main()
{
    float S;
    S = sum();
    printf("\nSUM = %f",S);     //function calling
}

float sum()      //function definition
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


