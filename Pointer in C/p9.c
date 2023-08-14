#include<stdio.h>
#include<conio.h>

void main()
{
    void *vp;

    int a = 5;
    float b = 1.1;
    char c = 'o';

    vp = &a;
    printf("%d\n",*(int*)vp);

    vp = &b;
    printf("%.2f\n",*(float*)vp);

    vp = &c;
    printf("%c",*(char*)vp);

getch();
}
