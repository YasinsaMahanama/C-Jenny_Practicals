#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

void main()
{
    FILE * fptr=NULL;
    char ch;


    fptr = fopen("def.txt","r");
    char str[50] = "jenny khatri";

    if(fptr==NULL)
    {
        printf("error");
        exit(1);
    }

    /*while(!feof(fptr))
    {
        ch = fgetc(fptr);
        printf("%c",ch);
    }*/
    ch=fgetc(fptr);
    printf("%c",ch);

    fclose(fptr);

getch();
}

