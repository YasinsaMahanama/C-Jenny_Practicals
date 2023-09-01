#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

void main()
{
    FILE * fptr=NULL;
    char ch;


    fptr = fopen("abc.txt","r");
    char str[50] = "jenny khatri";

    if(fptr==NULL)
    {
        printf("error");
        exit(1);
    }

    fgets(str,5,fptr);
    printf("%s",str);

    /*while(!feof(fptr))
    {
        ch = fgetc(fptr);
        printf("%c",ch);
    }*/

    fclose(fptr);

getch();
}


