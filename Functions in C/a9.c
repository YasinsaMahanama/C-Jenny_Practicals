#include<stdio.h>
#include<conio.h>

int incr(int i)
{
    static int count = 0;
    count = count+i;
    return(count);
}

void main()
{
    int i,j;
    for(i=0;i<=4;i++)
    {
        j = incr(i);
        printf("J = %d\n",j);
    }
    printf("\nJ = %d",j);
getch();
}
