#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

void main()
{
    FILE * fptr=NULL;
    char ch = 'a';
    int i;
    int a=10;

    fptr = fopen("abc.txt","w");
    char str[50] = "jenny khatri";

    if(fptr==NULL)
    {
        printf("error");
        exit(1);
    }

    fputc(ch,fptr);
    //fputc('a',fptr);
    //fputs(str,fptr);

    for(i=0;i!=strlen(str);i++)
    {
        fputc(str[i],fptr);
    }

    fprintf(fptr,"%d %s",a,str);

    fclose(fptr);

getch();
}
