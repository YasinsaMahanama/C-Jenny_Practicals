#include<conio.h>
#include<conio.h>

struct question
{
    int a;
    float b;
    int c;
};

void main()
{
    //struct question q = {.b=1,.c=10,.a=15};

    struct question q = {1,10,15};

    printf("a : %d\nb : %f\nc : %d",q.a,q.b,q.c);
getch();
}
