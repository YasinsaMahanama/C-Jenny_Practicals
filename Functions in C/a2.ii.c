#include<stdio.h>
#include<conio.h>

char fun(c);

void main()
{
    char ch;
    ch=fun();
    printf("ch=%c",ch);

    getch();
}

char fun()
{
    char c;
    printf("Enter a character :   ");
    scanf("%c",&c);
    return c;
}
