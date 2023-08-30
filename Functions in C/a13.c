#include<stdio.h>
#include<conio.h>

void modify(char[],char[]);

void main()
{
    char str1[]="jenny";
    char str2[]="khatri";
    modify(str1,str2);
getch();
}

void modify(char str1[],char str2[])
{
    int i,len=0;
    for(i=0;str1[i]!='\0';i++)
    {
        len=len+1;
    }
    str2[1]='z';
    printf("length of string 1 is : %d\n",len);
    printf("both the strings are :%s %s",str1,str2);
}
