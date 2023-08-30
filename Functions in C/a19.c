#include<stdio.h>
#include<conio.h>

void add(int a,int b)
{
    printf("Addition=%d\n",a+b);
}


void sub(int a,int b)
{
    printf("Subtraction=%d\n",a-b);
}


void mult(int a,int b)
{
    printf("Multiplication=%d\n",a*b);
}


void div(int a,int b)
{
    printf("Division=%d\n",a/b);
}

int main()
{
    int ch,a,b;
    int(*fptr[10])(int,int)={add,sub,mult,div};

    printf(" 0 for add\n 1 for sub\n 2 for multiply\n 3 for divide\n");
    printf("Enter choice:");
    scanf("%d",&ch);
    printf("\n\nEnter two numbers:");
    scanf("%d%d",&a,&b);

    (*fptr[ch])(a,b);
}
