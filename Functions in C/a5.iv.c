#include<stdio.h>
#include<conio.h>

char sum(void); //function declaration
void main()
{
    char S;
    S = sum();
    printf("\nSUM = %c",S);     //function calling
}

char sum()      //function definition
{
    int a,b,sum=0;
    printf("Enter the value of numbers : \n");
    printf("\ta = ");
    scanf("%d",&a);
    printf("\tb = ");
    scanf("%d",&b);

    sum = a+b;

    return'a', '0', '1';
    return sum;
    printf("\nInside Function");  // Not print statement that written after return
}



