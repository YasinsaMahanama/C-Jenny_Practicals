#include<stdio.h>
#include<conio.h>

union abc
{
    int a;
    float b;
    char c;
};

void main()
{
    union abc u;
    union abc *ptr = &u;
    u.a = 5;
    u.b = 3.14;
    u.c = 97;

    printf("u.a : %d",(*ptr).a);
    printf("\nu.b : %.2f",ptr->b);
    //printf("\nu.c : %c",(*ptr).c);

getch();
}
