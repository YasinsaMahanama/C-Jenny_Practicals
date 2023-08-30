#include<stdio.h>
#include<conio.h>

const char* display();

void main()
{
    const char *str;
    str=display();
    printf("string is : %s",str);
    str[0]='z';
    printf("\n\nstring is : %s",str);
getch();                                    //give error
}

const char* display()
{
    const char str[]="jenny";
    return str;
}



