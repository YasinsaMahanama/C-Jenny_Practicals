#include<stdio.h>
#include<conio.h>

char* display();

void main()
{
    char *str;
    str=display();
    printf("string is : %s",str);
    str[0]='z';
    printf("\n\nstring is : %s",str);
getch();
}

char* display()
{
    static char str[]="jenny";
    return str;
}


